// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/Entities/MqttClientConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientConfig() {}
// Cross Module References
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MqttClientConfig;
class UScriptStruct* FMqttClientConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MqttClientConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MqttClientConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttClientConfig, Z_Construct_UPackage__Script_MonsterMQTT(), TEXT("MqttClientConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MqttClientConfig.OuterSingleton;
}
template<> MONSTERMQTT_API UScriptStruct* StaticStruct<FMqttClientConfig>()
{
	return FMqttClientConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMqttClientConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventLoopDeltaMs_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EventLoopDeltaMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttClientConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** \xe4\xb8\xbb\xe6\x9c\xbaURL. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x9c\xbaURL." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl = { "HostUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMqttClientConfig, HostUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** \xe4\xb8\xbb\xe6\x9c\xba\xe7\xab\xaf\xe5\x8f\xa3 */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x9c\xba\xe7\xab\xaf\xe5\x8f\xa3" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMqttClientConfig, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xafID */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xafID" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMqttClientConfig, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** \xe4\xb8\xa4\xe4\xb8\xaa\xe5\x8f\x91\xe5\xb8\x83/\xe8\xae\xa2\xe9\x98\x85\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x89\xa7\xe8\xa1\x8c\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe6\x97\xb6\xe9\x97\xb4(\xe4\xbb\xa5\xe6\xaf\xab\xe7\xa7\x92\xe8\xa1\xa8\xe7\xa4\xba)\xe3\x80\x82 */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe4\xb8\xa4\xe4\xb8\xaa\xe5\x8f\x91\xe5\xb8\x83/\xe8\xae\xa2\xe9\x98\x85\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x89\xa7\xe8\xa1\x8c\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe6\x97\xb6\xe9\x97\xb4(\xe4\xbb\xa5\xe6\xaf\xab\xe7\xa7\x92\xe8\xa1\xa8\xe7\xa4\xba)\xe3\x80\x82" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs = { "EventLoopDeltaMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMqttClientConfig, EventLoopDeltaMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
		nullptr,
		&NewStructOps,
		"MqttClientConfig",
		sizeof(FMqttClientConfig),
		alignof(FMqttClientConfig),
		Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MqttClientConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MqttClientConfig.InnerSingleton, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MqttClientConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttClientConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttClientConfig_h_Statics::ScriptStructInfo[] = {
		{ FMqttClientConfig::StaticStruct, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps, TEXT("MqttClientConfig"), &Z_Registration_Info_UScriptStruct_MqttClientConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttClientConfig), 2810652235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttClientConfig_h_2454631045(TEXT("/Script/MonsterMQTT"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttClientConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttClientConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
