// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/Entities/MqttConnectionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttConnectionData() {}
// Cross Module References
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
class UScriptStruct* FMqttConnectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MONSTERMQTT_API uint32 Get_Z_Construct_UScriptStruct_FMqttConnectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttConnectionData, Z_Construct_UPackage__Script_MonsterMQTT(), TEXT("MqttConnectionData"), sizeof(FMqttConnectionData), Get_Z_Construct_UScriptStruct_FMqttConnectionData_Hash());
	}
	return Singleton;
}
template<> MONSTERMQTT_API UScriptStruct* StaticStruct<FMqttConnectionData>()
{
	return FMqttConnectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMqttConnectionData(FMqttConnectionData::StaticStruct, TEXT("/Script/MonsterMQTT"), TEXT("MqttConnectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttConnectionData
{
	FScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttConnectionData()
	{
		UScriptStruct::DeferCppStructOps<FMqttConnectionData>(FName(TEXT("MqttConnectionData")));
	}
} ScriptStruct_MonsterMQTT_StaticRegisterNativesFMqttConnectionData;
	struct Z_Construct_UScriptStruct_FMqttConnectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Login_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Login;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttConnectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** User login. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
		{ "ToolTip", "User login." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login = { "Login", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttConnectionData, Login), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** User password. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
		{ "ToolTip", "User password." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMqttConnectionData, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
		nullptr,
		&NewStructOps,
		"MqttConnectionData",
		sizeof(FMqttConnectionData),
		alignof(FMqttConnectionData),
		Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMqttConnectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MonsterMQTT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MqttConnectionData"), sizeof(FMqttConnectionData), Get_Z_Construct_UScriptStruct_FMqttConnectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMqttConnectionData_Hash() { return 828598406U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
