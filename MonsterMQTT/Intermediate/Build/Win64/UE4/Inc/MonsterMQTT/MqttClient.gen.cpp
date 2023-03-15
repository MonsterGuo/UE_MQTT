// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Private/Windows/MqttClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClient() {}
// Cross Module References
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClient_NoRegister();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClient();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientBase();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
	void UMqttClient::StaticRegisterNativesUMqttClient()
	{
	}
	UClass* Z_Construct_UClass_UMqttClient_NoRegister()
	{
		return UMqttClient::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMqttClientBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\xe5\xae\x9a\xe4\xb9\x89Mqtt\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "IncludePath", "Windows/MqttClient.h" },
		{ "ModuleRelativePath", "Private/Windows/MqttClient.h" },
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89Mqtt\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMqttClient_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMqttClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMqttClient, 2911898142);
	template<> MONSTERMQTT_API UClass* StaticClass<UMqttClient>()
	{
		return UMqttClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMqttClient(Z_Construct_UClass_UMqttClient, &UMqttClient::StaticClass, TEXT("/Script/MonsterMQTT"), TEXT("UMqttClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
