// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/MQTTManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTManager() {}
// Cross Module References
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMQTTManager_NoRegister();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMQTTManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
	void UMQTTManager::StaticRegisterNativesUMQTTManager()
	{
		UClass* Class = UMQTTManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JsonToStruct", &UMQTTManager::execJsonToStruct },
			{ "StructToJson", &UMQTTManager::execStructToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics
	{
		struct MQTTManager_eventJsonToStruct_Parms
		{
			FString Json;
			bool Success;
			UStruct* OutStruct;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MQTTManager_eventJsonToStruct_Parms, Json), METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json_MetaData)) };
	void Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MQTTManager_eventJsonToStruct_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MQTTManager_eventJsonToStruct_Parms), &Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MQTTManager_eventJsonToStruct_Parms, OutStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "JsonConvert" },
		{ "Comment", "//\xe5\xb0\x86json\xe6\x96\x87\xe6\x9c\xac\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MQTTManager.h" },
		{ "ToolTip", "\xe5\xb0\x86json\xe6\x96\x87\xe6\x9c\xac\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTManager, nullptr, "JsonToStruct", nullptr, nullptr, sizeof(MQTTManager_eventJsonToStruct_Parms), Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTManager_JsonToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTManager_StructToJson_Statics
	{
		struct MQTTManager_eventStructToJson_Parms
		{
			FString Json;
			bool Success;
			const UStruct* InStruct;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MQTTManager_eventStructToJson_Parms, Json), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MQTTManager_eventStructToJson_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MQTTManager_eventStructToJson_Parms), &Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MQTTManager_eventStructToJson_Parms, InStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Json,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "JsonConvert" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MQTTManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTManager, nullptr, "StructToJson", nullptr, nullptr, sizeof(MQTTManager_eventStructToJson_Parms), Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTManager_StructToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMQTTManager_NoRegister()
	{
		return UMQTTManager::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMQTTManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMQTTManager_JsonToStruct, "JsonToStruct" }, // 2470409933
		{ &Z_Construct_UFunction_UMQTTManager_StructToJson, "StructToJson" }, // 2118156717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MQTTManager.h" },
		{ "ModuleRelativePath", "Public/MQTTManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMQTTManager_Statics::ClassParams = {
		&UMQTTManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMQTTManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMQTTManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMQTTManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMQTTManager, 3206998360);
	template<> MONSTERMQTT_API UClass* StaticClass<UMQTTManager>()
	{
		return UMQTTManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMQTTManager(Z_Construct_UClass_UMQTTManager, &UMQTTManager::StaticClass, TEXT("/Script/MonsterMQTT"), TEXT("UMQTTManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
