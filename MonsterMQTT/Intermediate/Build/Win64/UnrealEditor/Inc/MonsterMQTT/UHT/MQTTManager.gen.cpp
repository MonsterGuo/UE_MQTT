// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/MQTTManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMQTTManager();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMQTTManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTManager_eventJsonToStruct_Parms, Json), METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json_MetaData)) };
	void Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MQTTManager_eventJsonToStruct_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MQTTManager_eventJsonToStruct_Parms), &Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_OutStruct = { "OutStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTManager_eventJsonToStruct_Parms, OutStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::NewProp_OutStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "JsonConvert" },
		{ "Comment", "//\xe5\xb0\x86json\xe6\x96\x87\xe6\x9c\xac\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "CustomStructureParam", "OutStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MQTTManager.h" },
		{ "ToolTip", "\xe5\xb0\x86json\xe6\x96\x87\xe6\x9c\xac\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTManager, nullptr, "JsonToStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::MQTTManager_eventJsonToStruct_Parms), Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTManager_JsonToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTManager_JsonToStruct_Statics::FuncParams);
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTManager_eventStructToJson_Parms, Json), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((MQTTManager_eventStructToJson_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MQTTManager_eventStructToJson_Parms), &Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTManager_eventStructToJson_Parms, InStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "JsonConvert" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MQTTManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTManager, nullptr, "StructToJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::MQTTManager_eventStructToJson_Parms), Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTManager_StructToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTManager_StructToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMQTTManager);
	UClass* Z_Construct_UClass_UMQTTManager_NoRegister()
	{
		return UMQTTManager::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMQTTManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMQTTManager_JsonToStruct, "JsonToStruct" }, // 1707447281
		{ &Z_Construct_UFunction_UMQTTManager_StructToJson, "StructToJson" }, // 2616590805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MQTTManager.h" },
		{ "ModuleRelativePath", "Public/MQTTManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMQTTManager_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UMQTTManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMQTTManager.OuterSingleton, Z_Construct_UClass_UMQTTManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMQTTManager.OuterSingleton;
	}
	template<> MONSTERMQTT_API UClass* StaticClass<UMQTTManager>()
	{
		return UMQTTManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTManager);
	UMQTTManager::~UMQTTManager() {}
	struct Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MQTTManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MQTTManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMQTTManager, UMQTTManager::StaticClass, TEXT("UMQTTManager"), &Z_Registration_Info_UClass_UMQTTManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMQTTManager), 760019585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MQTTManager_h_3246895907(TEXT("/Script/MonsterMQTT"),
		Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MQTTManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MQTTManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
