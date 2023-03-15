//Copyright MonsterGuoGuo, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonObjectConverter.h"
#include "MQTTManager.generated.h"

UCLASS()
class MONSTERMQTT_API UMQTTManager:public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable,Category="JsonConvert",CustomThunk,meta= (CustomStructureParam ="InStruct"))
	static void StructToJson(FString& Json,bool& Success,const UStruct* InStruct);
	DECLARE_FUNCTION(execStructToJson)
	{
		P_GET_PROPERTY_REF(FStrProperty,Json);
		P_GET_UBOOL_REF(Success);
		Stack.Step(Stack.Object,NULL);
		FProperty* Prop = Stack.MostRecentProperty;
		void* Ptr = Stack.MostRecentPropertyAddress;
		P_FINISH;
		Success = UMQTTManager::AnyStructToJsonString(Prop,Ptr,Json);
	}
	//将json文本转换为结构体
	UFUNCTION(BlueprintCallable,Category="JsonConvert",CustomThunk,meta= (CustomStructureParam ="OutStruct"))
	static void JsonToStruct(const FString& Json,bool& Success,UStruct* &OutStruct);
	DECLARE_FUNCTION(execJsonToStruct)
	{
		P_GET_PROPERTY(FStrProperty, Json);
		P_GET_UBOOL_REF(Success);
	
		Stack.Step(Stack.Object, NULL);
	
		FProperty* Prop = Stack.MostRecentProperty;
		void* Ptr = Stack.MostRecentPropertyAddress;
	
		P_FINISH;
	
		Success = UMQTTManager::JsonStringToAnyStruct(Prop, Ptr, Json);
	}
	//其他函数
	static bool JsonStringToAnyStruct(FProperty* Property,void* ValuePtr,FString& Json);
	static TSharedRef<FJsonValue> AnyStructToJsonValue(FProperty* Property, void* ValuePtr);
	static bool AnyStructToJsonString(FProperty* Property,void* ValuePtr,FString& Json);
	static TSharedRef<FJsonValue> JsonValueToAnyStruct(FProperty* Property, TSharedPtr<FJsonValue> Value);
	static bool JsonValueToAnyStruct(TSharedPtr<FJsonValue> JsonValue, FProperty* Property, void* ValuePtr);
};