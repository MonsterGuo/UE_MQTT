#pragma once
#include "MQTTManager.h"

//从任意结构体转化成json字符串
bool UMQTTManager::AnyStructToJsonString(FProperty* Property,void* ValuePtr,FString& Json)
{
	bool Success = false;
	if (!Property || ValuePtr == NULL)
	{
		return Success;
	}
	TSharedRef<TJsonWriter<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>> JsonWriter = TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&Json, 0);
	// convert to json
	auto JsonValue = UMQTTManager::AnyStructToJsonValue(Property, ValuePtr);
	// serialize
	if (JsonValue->Type == EJson::Object)
	{
		Success = FJsonSerializer::Serialize(JsonValue->AsObject().ToSharedRef(), JsonWriter);
	}
	else if (JsonValue->Type == EJson::Array)
	{
		Success = FJsonSerializer::Serialize(JsonValue->AsArray(), JsonWriter);
	}
	JsonWriter->Close();
	return Success;
}

TSharedRef<FJsonValue> UMQTTManager::AnyStructToJsonValue(FProperty* Property, void* ValuePtr)
{
	if (ValuePtr == NULL || Property == NULL)
	{
		return MakeShareable(new FJsonValueNull());
	}
	// array
	else if (FArrayProperty* arrayProperty = CastField<FArrayProperty>(Property))
	{
		TArray<TSharedPtr<FJsonValue>> Array;
		auto Helper = FScriptArrayHelper::CreateHelperFormInnerProperty(arrayProperty->Inner, ValuePtr);
		for (int32 ArrayIndex = 0; ArrayIndex < Helper.Num(); ArrayIndex++)
		{
			Array.Add(UMQTTManager::AnyStructToJsonValue(arrayProperty->Inner, Helper.GetRawPtr(ArrayIndex)));
		}
		return MakeShareable(new FJsonValueArray(Array));
	}
	// set
	else if (FSetProperty* setProperty = CastField<FSetProperty>(Property))
	{
		TArray<TSharedPtr<FJsonValue>> Array;
		auto Helper = FScriptSetHelper::CreateHelperFormElementProperty(setProperty->ElementProp, ValuePtr);
		for (int32 ArrayIndex = 0; ArrayIndex < Helper.Num(); ++ArrayIndex)
		{
			Array.Add(UMQTTManager::AnyStructToJsonValue(setProperty->ElementProp, Helper.GetElementPtr(ArrayIndex)));
		}
		return MakeShareable(new FJsonValueArray(Array));
	}
	// map 
	else if (FMapProperty* mapProperty = CastField<FMapProperty>(Property))
	{
		TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
		auto Helper = FScriptMapHelper::CreateHelperFormInnerProperties(mapProperty->KeyProp, mapProperty->ValueProp, ValuePtr);
		for (int32 ArrayIndex = 0; ArrayIndex < Helper.Num(); ++ArrayIndex)
		{
			FString KeyStr;
			auto Key = UMQTTManager::AnyStructToJsonValue(mapProperty->KeyProp, Helper.GetKeyPtr(ArrayIndex));
			if (!Key->TryGetString(KeyStr))
			{
				mapProperty->KeyProp->ExportTextItem(KeyStr, Helper.GetKeyPtr(ArrayIndex), nullptr, nullptr, 0);
				if (KeyStr.IsEmpty())
				{
					UE_LOG(LogTemp, Warning, TEXT("AnyStructToJsonValue : Error serializing key in map property at index %i, using empty string as key"), ArrayIndex);
				}
			}
			auto Val = UMQTTManager::AnyStructToJsonValue(mapProperty->ValueProp, Helper.GetValuePtr(ArrayIndex));
			JsonObject->SetField(KeyStr, Val);
		}
		return MakeShareable(new FJsonValueObject(JsonObject));
	}
	// struct
	else if (FStructProperty* structProperty = CastField<FStructProperty>(Property))
	{
		TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
		for (TFieldIterator<FProperty> It(structProperty->Struct); It; ++It)
		{
			FProperty* Prop = *It;
			JsonObject->SetField(Prop->GetAuthoredName(), UMQTTManager::AnyStructToJsonValue(Prop, Prop->ContainerPtrToValuePtr<void*>(ValuePtr)));
		}
		return MakeShareable(new FJsonValueObject(JsonObject));
	}
	// object
	else if (FObjectProperty* objectProperty = CastField<FObjectProperty>(Property))
	{
		void* PropValue = objectProperty->GetObjectPropertyValue(ValuePtr);
		if (PropValue == NULL)
		{
			return MakeShareable(new FJsonValueNull());
		}
		if (objectProperty->PropertyClass->IsNative())
		{
			auto Value = FJsonObjectConverter::UPropertyToJsonValue(Property, ValuePtr, 0, 0);
			return Value.ToSharedRef();
		}
		TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
		for (TFieldIterator<FProperty> It(objectProperty->PropertyClass); It; ++It)
		{
			FProperty* Prop = *It;
			JsonObject->SetField(Prop->GetAuthoredName(), UMQTTManager::AnyStructToJsonValue(Prop, Prop->ContainerPtrToValuePtr<void*>(PropValue)));
		}
		return MakeShareable(new FJsonValueObject(JsonObject));
	}
	// scalar
	else
	{
		auto Value = FJsonObjectConverter::UPropertyToJsonValue(Property, ValuePtr, 0, 0);
		return Value.ToSharedRef();
	}
}

//从json字符串转化成任意结构体
bool UMQTTManager::JsonStringToAnyStruct(FProperty* Property, void* ValuePtr, FString& Json)
{
	bool Success = false;
	if (!Property || !ValuePtr || Json.IsEmpty())
	{
		return Success;
	}
	TSharedPtr<FJsonValue> JsonValue;
	TSharedRef<TJsonReader<> > JsonReader = TJsonReaderFactory<>::Create(Json);
	if (FJsonSerializer::Deserialize(JsonReader, JsonValue) && JsonValue.IsValid())
	{
		TSharedRef<FJsonValue> InJsonValue = UMQTTManager::JsonValueToAnyStruct(Property, JsonValue);
		if ((InJsonValue->Type == EJson::Array && InJsonValue->AsArray().Num() != 0) || (InJsonValue->Type == EJson::Object && InJsonValue->AsObject()->Values.Num() != 0))
		{
			Success = UMQTTManager::JsonValueToAnyStruct(InJsonValue, Property, ValuePtr);
		}
	}
	return Success;
}

TSharedRef<FJsonValue> UMQTTManager::JsonValueToAnyStruct(FProperty* Property, TSharedPtr<FJsonValue> Value)
{
	if (!Value.IsValid() || Value->IsNull() || Property == NULL)
	{
		return MakeShareable(new FJsonValueNull());
	}
	// array
	else if (FArrayProperty* arrayProperty = CastField<FArrayProperty>(Property))
	{
		TArray<TSharedPtr<FJsonValue>> OutArray;
		if (Value->Type == EJson::Array)
		{
			auto InArray = Value->AsArray();
			for (int32 ArrayIndex = 0; ArrayIndex < InArray.Num(); ArrayIndex++)
			{
				OutArray.Add(UMQTTManager::JsonValueToAnyStruct(arrayProperty->Inner, InArray[ArrayIndex]));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("JsonValueToAnyStruct: error while converting JsonValue to array, type %i is invalid with array property, returning empty array"), Value->Type);
		}
		return MakeShareable(new FJsonValueArray(OutArray));
	}
	// set
	else if (FSetProperty* setProperty = CastField<FSetProperty>(Property))
	{
		TArray<TSharedPtr<FJsonValue>> OutSet;
		if (Value->Type == EJson::Array)
		{
			auto InSet = Value->AsArray();
			for (int32 ArrayIndex = 0; ArrayIndex < InSet.Num(); ArrayIndex++)
			{
				OutSet.Add(UMQTTManager::JsonValueToAnyStruct(setProperty->ElementProp, InSet[ArrayIndex]));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("JsonValueToAnyStruct: error while converting JsonValue to set, type %i is invalid with set property, returning empty set"), Value->Type);
		}
		return MakeShareable(new FJsonValueArray(OutSet));
	}
	// map
	else if (FMapProperty* mapProperty = CastField<FMapProperty>(Property))
	{
		TSharedRef<FJsonObject> OutMap = MakeShared<FJsonObject>();
		if (Value->Type == EJson::Object)
		{
			auto InMap = Value->AsObject();
			if (InMap)
			{
				for (auto Val : InMap->Values)
				{
					OutMap->SetField(Val.Key, UMQTTManager::JsonValueToAnyStruct(mapProperty->ValueProp, Val.Value));
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("JsonValueToAnyStruct: error while converting JsonValue to map, type %i is invalid with map property, returning empty object"), Value->Type);
		}
		return MakeShareable(new FJsonValueObject(OutMap));
	}
	// struct
	else if (FStructProperty* structProperty = CastField<FStructProperty>(Property))
	{
		TSharedRef<FJsonObject> OutObject = MakeShared<FJsonObject>();
		if (Value->Type == EJson::Object)
		{
			auto InObject = Value->AsObject();
			if (InObject)
			{
				for (TFieldIterator<FProperty> It(structProperty->Struct); It; ++It)
				{
					FProperty* Prop = *It;
					if (InObject->HasField(Prop->GetAuthoredName()))
					{
						OutObject->SetField(Prop->GetName(), UMQTTManager::JsonValueToAnyStruct(Prop, *InObject->Values.Find(Prop->GetAuthoredName())));
					}
					else if (InObject->HasField(Prop->GetName()))
					{
						OutObject->SetField(Prop->GetName(), UMQTTManager::JsonValueToAnyStruct(Prop, *InObject->Values.Find(Prop->GetName())));
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("JsonValueToAnyStruct: error while converting JsonValue to struct, type %i is invalid with struct property, returning empty object"), Value->Type);
		}
		return MakeShareable(new FJsonValueObject(OutObject));
	}
	// object
	else if (FObjectProperty* objectProperty = CastField<FObjectProperty>(Property))
	{
		if (objectProperty->PropertyClass->IsNative())
		{
			return Value.ToSharedRef();
		}
		if (Value->Type == EJson::Object)
		{
			auto InObject = Value->AsObject();
			if (InObject.IsValid())
			{
				TSharedRef<FJsonObject> OutObject = MakeShared<FJsonObject>();
				for (TFieldIterator<FProperty> It(objectProperty->PropertyClass); It; ++It)
				{
					FProperty* Prop = *It;
					if (InObject->HasField(Prop->GetAuthoredName()))
					{
						OutObject->SetField(Prop->GetName(), UMQTTManager::JsonValueToAnyStruct(Prop, InObject->TryGetField(Prop->GetAuthoredName())));
					}
					else if (InObject->HasField(Prop->GetName()))
					{
						OutObject->SetField(Prop->GetName(), UMQTTManager::JsonValueToAnyStruct(Prop, InObject->TryGetField(Prop->GetName())));
					}
				}
				return MakeShareable(new FJsonValueObject(OutObject));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("JsonValueToAnyStruct: error while converting JsonValue to object, type %i is invalid with object property, returning empty object"), Value->Type);
		}
		return MakeShareable(new FJsonValueNull());
	}
	// scalar
	else
	{
		return Value.ToSharedRef();
	}
}

bool UMQTTManager::JsonValueToAnyStruct(TSharedPtr<FJsonValue> JsonValue, FProperty* Property, void* ValuePtr)
{
	if (!JsonValue.IsValid() || Property == NULL)
	{
		return false;
	}
	// array
	else if (FArrayProperty* arrayProperty = CastField<FArrayProperty>(Property)) 
	{
		if (JsonValue->Type == EJson::Array)
		{
			auto JsonArray = JsonValue->AsArray();
			auto Helper = FScriptArrayHelper::CreateHelperFormInnerProperty(arrayProperty->Inner, ValuePtr);
			Helper.Resize(JsonArray.Num());
			for (int32 i = 0; i < JsonArray.Num(); i++)
			{
				if (!UMQTTManager::JsonValueToAnyStruct(JsonArray[i], arrayProperty->Inner, Helper.GetRawPtr(i)))
				{
					return false;
				}
			}
		}
	}
	// set
	else if (FSetProperty* setProperty = CastField<FSetProperty>(Property)) 
	{
		if (JsonValue->Type == EJson::Array)
		{
			auto JsonArray = JsonValue->AsArray();
			auto Helper = FScriptSetHelper::CreateHelperFormElementProperty(setProperty->ElementProp, ValuePtr);
			for (int32 i = 0; i < JsonArray.Num(); i++)
			{
				int32 Idx = Helper.AddDefaultValue_Invalid_NeedsRehash();
				if (!UMQTTManager::JsonValueToAnyStruct(JsonArray[i], setProperty->ElementProp, Helper.GetElementPtr(Idx)))
				{
					return false;
				}
			}
			Helper.Rehash();
		}
	}
	// map
	else if (FMapProperty* mapProperty = CastField<FMapProperty>(Property)) 
	{
		if (JsonValue->Type == EJson::Object)
		{
			auto JsonObject = JsonValue->AsObject();
			auto Helper = FScriptMapHelper::CreateHelperFormInnerProperties(mapProperty->KeyProp, mapProperty->ValueProp, ValuePtr);
			Helper.EmptyValues(JsonObject->Values.Num());
	
			for (const auto& Entry : JsonObject->Values) 
			{
				int32 Idx = Helper.AddDefaultValue_Invalid_NeedsRehash();
				TSharedPtr<FJsonValueString> StrKeyVal = MakeShared<FJsonValueString>(Entry.Key);
				if (!UMQTTManager::JsonValueToAnyStruct(StrKeyVal, mapProperty->KeyProp, Helper.GetKeyPtr(Idx)) || !UMQTTManager::JsonValueToAnyStruct(Entry.Value, mapProperty->ValueProp, Helper.GetValuePtr(Idx))) 
				{
					return false;
				}
			}
	
			Helper.Rehash();
		}
	}
	// struct
	else if (FStructProperty* structProperty = CastField<FStructProperty>(Property))
	{
		if (JsonValue->Type == EJson::String)
		{
			return FJsonObjectConverter::JsonValueToUProperty(JsonValue, Property, ValuePtr);
		}
		if (JsonValue->Type == EJson::Object)
		{
			auto JsonObject = JsonValue->AsObject();
			for (TFieldIterator<FProperty> It(structProperty->Struct); It; ++It)
			{
				FProperty* Prop = *It;
				if (JsonObject->HasField(Prop->GetName()))
				{
					void* Value = Prop->ContainerPtrToValuePtr<uint8>(ValuePtr);
					if (!UMQTTManager::JsonValueToAnyStruct(JsonObject->TryGetField(Prop->GetName()), Prop, Value))
					{
						return false;
					}
				}
			}
		}
	}
	// object
	else if (FObjectProperty* objectProperty = CastField<FObjectProperty>(Property))
	{
		if (objectProperty->PropertyClass->IsNative())
		{
			return FJsonObjectConverter::JsonValueToUProperty(JsonValue, Property, ValuePtr, 0, 0);
		}
		if (JsonValue->Type == EJson::Object && ValuePtr)
		{
			UObject* PropValue = objectProperty->GetObjectPropertyValue(ValuePtr);
			if (!PropValue)
			{
				PropValue = StaticAllocateObject(objectProperty->PropertyClass, GetTransientPackage(), NAME_None, EObjectFlags::RF_NoFlags, EInternalObjectFlags::None, false);
				(*objectProperty->PropertyClass->ClassConstructor)(FObjectInitializer(PropValue, objectProperty->PropertyClass->ClassDefaultObject, false, false));
				objectProperty->SetObjectPropertyValue(ValuePtr, PropValue);
			}
			auto JsonObject = JsonValue->AsObject();
			if (!JsonObject->HasTypedField<EJson::String>("_ClassName"))
			{
				JsonObject->SetStringField("_ClassName", PropValue->GetClass()->GetFName().ToString());
			}
			return FJsonObjectConverter::JsonObjectToUStruct(JsonObject.ToSharedRef(), objectProperty->PropertyClass, PropValue, 0, 0);
		}
	}
	// scalar
	else
	{
		return FJsonObjectConverter::JsonValueToUProperty(JsonValue, Property, ValuePtr, 0, 0);
	}
	return true;
}