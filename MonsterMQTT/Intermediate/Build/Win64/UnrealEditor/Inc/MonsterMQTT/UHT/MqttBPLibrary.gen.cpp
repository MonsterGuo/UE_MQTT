// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/MqttBPLibrary.h"
#include "MonsterMQTT/Public/Entities/MqttClientConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttBPLibrary();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttBPLibrary_NoRegister();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
	DEFINE_FUNCTION(UMqttBPLibrary::execCreateMqttClient)
	{
		P_GET_STRUCT(FMqttClientConfig,Z_Param_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IMqttClientInterface>*)Z_Param__Result=UMqttBPLibrary::CreateMqttClient(Z_Param_config);
		P_NATIVE_END;
	}
	void UMqttBPLibrary::StaticRegisterNativesUMqttBPLibrary()
	{
		UClass* Class = UMqttBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMqttClient", &UMqttBPLibrary::execCreateMqttClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics
	{
		struct MqttBPLibrary_eventCreateMqttClient_Parms
		{
			FMqttClientConfig config;
			TScriptInterface<IMqttClientInterface> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_config;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttBPLibrary_eventCreateMqttClient_Parms, config), Z_Construct_UScriptStruct_FMqttClientConfig, METADATA_PARAMS(nullptr, 0) }; // 2810652235
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttBPLibrary_eventCreateMqttClient_Parms, ReturnValue), Z_Construct_UClass_UMqttClientInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MqttBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttBPLibrary, nullptr, "CreateMqttClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::MqttBPLibrary_eventCreateMqttClient_Parms), Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttBPLibrary);
	UClass* Z_Construct_UClass_UMqttBPLibrary_NoRegister()
	{
		return UMqttBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMqttBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient, "CreateMqttClient" }, // 3071315865
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MqttBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MqttBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttBPLibrary_Statics::ClassParams = {
		&UMqttBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMqttBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UMqttBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttBPLibrary.OuterSingleton, Z_Construct_UClass_UMqttBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttBPLibrary.OuterSingleton;
	}
	template<> MONSTERMQTT_API UClass* StaticClass<UMqttBPLibrary>()
	{
		return UMqttBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttBPLibrary);
	UMqttBPLibrary::~UMqttBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MqttBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MqttBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttBPLibrary, UMqttBPLibrary::StaticClass, TEXT("UMqttBPLibrary"), &Z_Registration_Info_UClass_UMqttBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttBPLibrary), 46312925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MqttBPLibrary_h_570388232(TEXT("/Script/MonsterMQTT"),
		Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MqttBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_MqttBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
