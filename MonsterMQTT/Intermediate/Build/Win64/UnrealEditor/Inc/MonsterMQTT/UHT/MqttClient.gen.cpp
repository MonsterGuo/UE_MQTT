// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Private/Windows/MqttClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClient() {}
// Cross Module References
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClient();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClient_NoRegister();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientBase();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
	void UMqttClient::StaticRegisterNativesUMqttClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttClient);
	UClass* Z_Construct_UClass_UMqttClient_NoRegister()
	{
		return UMqttClient::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMqttClientBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\xe5\xae\x9a\xe4\xb9\x89Mqtt\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "IncludePath", "Windows/MqttClient.h" },
		{ "ModuleRelativePath", "Private/Windows/MqttClient.h" },
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89Mqtt\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClient_Statics::ClassParams = {
		&UMqttClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttClient()
	{
		if (!Z_Registration_Info_UClass_UMqttClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClient.OuterSingleton, Z_Construct_UClass_UMqttClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttClient.OuterSingleton;
	}
	template<> MONSTERMQTT_API UClass* StaticClass<UMqttClient>()
	{
		return UMqttClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClient);
	UMqttClient::~UMqttClient() {}
	struct Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClient, UMqttClient::StaticClass, TEXT("UMqttClient"), &Z_Registration_Info_UClass_UMqttClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClient), 3646862454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_637527361(TEXT("/Script/MonsterMQTT"),
		Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
