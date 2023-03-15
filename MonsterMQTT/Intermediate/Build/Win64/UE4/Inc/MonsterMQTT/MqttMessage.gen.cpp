// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/Entities/MqttMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttMessage() {}
// Cross Module References
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
class UScriptStruct* FMqttMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MONSTERMQTT_API uint32 Get_Z_Construct_UScriptStruct_FMqttMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttMessage, Z_Construct_UPackage__Script_MonsterMQTT(), TEXT("MqttMessage"), sizeof(FMqttMessage), Get_Z_Construct_UScriptStruct_FMqttMessage_Hash());
	}
	return Singleton;
}
template<> MONSTERMQTT_API UScriptStruct* StaticStruct<FMqttMessage>()
{
	return FMqttMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMqttMessage(FMqttMessage::StaticStruct, TEXT("/Script/MonsterMQTT"), TEXT("MqttMessage"), false, nullptr, nullptr);
static struct FScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttMessage
{
	FScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttMessage()
	{
		UScriptStruct::DeferCppStructOps<FMqttMessage>(FName(TEXT("MqttMessage")));
	}
} ScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttMessage;
	struct Z_Construct_UScriptStruct_FMqttMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Topic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Topic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Retain_MetaData[];
#endif
		static void NewProp_Retain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Retain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Qos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Qos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\n" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Message content. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
		{ "ToolTip", "Message content." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Message topic. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
		{ "ToolTip", "Message topic." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic = { "Topic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttMessage, Topic), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Retain flag. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
		{ "ToolTip", "Retain flag." },
	};
#endif
	void Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_SetBit(void* Obj)
	{
		((FMqttMessage*)Obj)->Retain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain = { "Retain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMqttMessage), &Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** Quality of signal. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttMessage.h" },
		{ "ToolTip", "Quality of signal." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos = { "Qos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttMessage, Qos), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Topic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Retain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttMessage_Statics::NewProp_Qos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
		nullptr,
		&NewStructOps,
		"MqttMessage",
		sizeof(FMqttMessage),
		alignof(FMqttMessage),
		Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMqttMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MonsterMQTT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MqttMessage"), sizeof(FMqttMessage), Get_Z_Construct_UScriptStruct_FMqttMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMqttMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMqttMessage_Hash() { return 3190150890U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
