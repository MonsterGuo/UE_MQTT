// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/Entities/MqttClientConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientConfig() {}
// Cross Module References
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
class UScriptStruct* FMqttClientConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MONSTERMQTT_API uint32 Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttClientConfig, Z_Construct_UPackage__Script_MonsterMQTT(), TEXT("MqttClientConfig"), sizeof(FMqttClientConfig), Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash());
	}
	return Singleton;
}
template<> MONSTERMQTT_API UScriptStruct* StaticStruct<FMqttClientConfig>()
{
	return FMqttClientConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMqttClientConfig(FMqttClientConfig::StaticStruct, TEXT("/Script/MonsterMQTT"), TEXT("MqttClientConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttClientConfig
{
	FScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttClientConfig()
	{
		UScriptStruct::DeferCppStructOps<FMqttClientConfig>(FName(TEXT("MqttClientConfig")));
	}
} ScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttClientConfig;
	struct Z_Construct_UScriptStruct_FMqttClientConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventLoopDeltaMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EventLoopDeltaMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttClientConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** \xe4\xb8\xbb\xe6\x9c\xbaURL. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x9c\xbaURL." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl = { "HostUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, HostUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** \xe4\xb8\xbb\xe6\x9c\xba\xe7\xab\xaf\xe5\x8f\xa3 */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe6\x9c\xba\xe7\xab\xaf\xe5\x8f\xa3" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/**\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xafID */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe5\x94\xaf\xe4\xb8\x80\xe7\x9a\x84\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xafID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** \xe4\xb8\xa4\xe4\xb8\xaa\xe5\x8f\x91\xe5\xb8\x83/\xe8\xae\xa2\xe9\x98\x85\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x89\xa7\xe8\xa1\x8c\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe6\x97\xb6\xe9\x97\xb4(\xe4\xbb\xa5\xe6\xaf\xab\xe7\xa7\x92\xe8\xa1\xa8\xe7\xa4\xba)\xe3\x80\x82 */" },
		{ "ModuleRelativePath", "Public/Entities/MqttClientConfig.h" },
		{ "ToolTip", "\xe4\xb8\xa4\xe4\xb8\xaa\xe5\x8f\x91\xe5\xb8\x83/\xe8\xae\xa2\xe9\x98\x85\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x89\xa7\xe8\xa1\x8c\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe6\x97\xb6\xe9\x97\xb4(\xe4\xbb\xa5\xe6\xaf\xab\xe7\xa7\x92\xe8\xa1\xa8\xe7\xa4\xba)\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs = { "EventLoopDeltaMs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttClientConfig, EventLoopDeltaMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttClientConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_HostUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttClientConfig_Statics::NewProp_EventLoopDeltaMs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MonsterMQTT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MqttClientConfig"), sizeof(FMqttClientConfig), Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMqttClientConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMqttClientConfig_Hash() { return 149668481U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
