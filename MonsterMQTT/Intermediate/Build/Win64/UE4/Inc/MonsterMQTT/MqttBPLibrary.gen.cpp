// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Public/MqttBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttBPLibrary() {}
// Cross Module References
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttBPLibrary_NoRegister();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttClientConfig();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_config;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttBPLibrary_eventCreateMqttClient_Parms, config), Z_Construct_UScriptStruct_FMqttClientConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MqttBPLibrary_eventCreateMqttClient_Parms, ReturnValue), Z_Construct_UClass_UMqttClientInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MqttBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttBPLibrary, nullptr, "CreateMqttClient", nullptr, nullptr, sizeof(MqttBPLibrary_eventCreateMqttClient_Parms), Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMqttBPLibrary_NoRegister()
	{
		return UMqttBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMqttBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttBPLibrary_CreateMqttClient, "CreateMqttClient" }, // 184631460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MqttBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MqttBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMqttBPLibrary_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMqttBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMqttBPLibrary, 3682384283);
	template<> MONSTERMQTT_API UClass* StaticClass<UMqttBPLibrary>()
	{
		return UMqttBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMqttBPLibrary(Z_Construct_UClass_UMqttBPLibrary, &UMqttBPLibrary::StaticClass, TEXT("/Script/MonsterMQTT"), TEXT("UMqttBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
