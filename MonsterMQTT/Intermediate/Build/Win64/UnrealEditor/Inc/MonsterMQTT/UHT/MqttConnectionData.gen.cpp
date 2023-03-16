// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/Entities/MqttConnectionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttConnectionData() {}
// Cross Module References
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MqttConnectionData;
class UScriptStruct* FMqttConnectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MqttConnectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MqttConnectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMqttConnectionData, Z_Construct_UPackage__Script_MonsterMQTT(), TEXT("MqttConnectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MqttConnectionData.OuterSingleton;
}
template<> MONSTERMQTT_API UScriptStruct* StaticStruct<FMqttConnectionData>()
{
	return FMqttConnectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMqttConnectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Login_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Login;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMqttConnectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** User login. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
		{ "ToolTip", "User login." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login = { "Login", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMqttConnectionData, Login), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** User password. */" },
		{ "ModuleRelativePath", "Public/Entities/MqttConnectionData.h" },
		{ "ToolTip", "User password." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMqttConnectionData, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMqttConnectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Login,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewProp_Password,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMqttConnectionData_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_MqttConnectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MqttConnectionData.InnerSingleton, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MqttConnectionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttConnectionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttConnectionData_h_Statics::ScriptStructInfo[] = {
		{ FMqttConnectionData::StaticStruct, Z_Construct_UScriptStruct_FMqttConnectionData_Statics::NewStructOps, TEXT("MqttConnectionData"), &Z_Registration_Info_UScriptStruct_MqttConnectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMqttConnectionData), 374043855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttConnectionData_h_3661991084(TEXT("/Script/MonsterMQTT"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttConnectionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Public_Entities_MqttConnectionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
