// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterMQTT/Private/MqttClientBase.h"
#include "MonsterMQTT/Public/Entities/MqttConnectionData.h"
#include "MonsterMQTT/Public/Entities/MqttMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMqttClientBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientBase();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientBase_NoRegister();
	MONSTERMQTT_API UClass* Z_Construct_UClass_UMqttClientInterface_NoRegister();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnConnectDelegate__DelegateSignature();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnDisconnectDelegate__DelegateSignature();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnMessageDelegate__DelegateSignature();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnMqttErrorDelegate__DelegateSignature();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnPublishDelegate__DelegateSignature();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnSubscribeDelegate__DelegateSignature();
	MONSTERMQTT_API UFunction* Z_Construct_UDelegateFunction_MonsterMQTT_OnUnsubscribeDelegate__DelegateSignature();
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttConnectionData();
	MONSTERMQTT_API UScriptStruct* Z_Construct_UScriptStruct_FMqttMessage();
	UPackage* Z_Construct_UPackage__Script_MonsterMQTT();
// End Cross Module References
	DEFINE_FUNCTION(UMqttClientBase::execSetOnErrorHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onErrorCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnErrorHandler(FOnMqttErrorDelegate(Z_Param_Out_onErrorCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnUnsubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onUnsubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnUnsubscribeHandler(FOnUnsubscribeDelegate(Z_Param_Out_onUnsubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnSubscribeHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onSubscribeCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnSubscribeHandler(FOnSubscribeDelegate(Z_Param_Out_onSubscribeCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnMessageHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onMessageCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_onMessageCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSetOnPublishHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onPublishCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnPublishHandler(FOnPublishDelegate(Z_Param_Out_onPublishCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execPublish)
	{
		P_GET_STRUCT(FMqttMessage,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Publish(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execUnsubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unsubscribe(Z_Param_topic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execSubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_topic);
		P_GET_PROPERTY(FIntProperty,Z_Param_qos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Subscribe(Z_Param_topic,Z_Param_qos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onDisconnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_onDisconnectCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMqttClientBase::execConnect)
	{
		P_GET_STRUCT(FMqttConnectionData,Z_Param_connectionData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_onConnectCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(Z_Param_connectionData,FOnConnectDelegate(Z_Param_Out_onConnectCallback));
		P_NATIVE_END;
	}
	void UMqttClientBase::StaticRegisterNativesUMqttClientBase()
	{
		UClass* Class = UMqttClientBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UMqttClientBase::execConnect },
			{ "Disconnect", &UMqttClientBase::execDisconnect },
			{ "Publish", &UMqttClientBase::execPublish },
			{ "SetOnErrorHandler", &UMqttClientBase::execSetOnErrorHandler },
			{ "SetOnMessageHandler", &UMqttClientBase::execSetOnMessageHandler },
			{ "SetOnPublishHandler", &UMqttClientBase::execSetOnPublishHandler },
			{ "SetOnSubscribeHandler", &UMqttClientBase::execSetOnSubscribeHandler },
			{ "SetOnUnsubscribeHandler", &UMqttClientBase::execSetOnUnsubscribeHandler },
			{ "Subscribe", &UMqttClientBase::execSubscribe },
			{ "Unsubscribe", &UMqttClientBase::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMqttClientBase_Connect_Statics
	{
		struct MqttClientBase_eventConnect_Parms
		{
			FMqttConnectionData connectionData;
			FScriptDelegate onConnectCallback;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_connectionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onConnectCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onConnectCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_connectionData = { "connectionData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventConnect_Parms, connectionData), Z_Construct_UScriptStruct_FMqttConnectionData, METADATA_PARAMS(nullptr, 0) }; // 374043855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback = { "onConnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventConnect_Parms, onConnectCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback_MetaData)) }; // 3779030558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_connectionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Connect_Statics::NewProp_onConnectCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::MqttClientBase_eventConnect_Parms), Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics
	{
		struct MqttClientBase_eventDisconnect_Parms
		{
			FScriptDelegate onDisconnectCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDisconnectCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onDisconnectCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback = { "onDisconnectCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventDisconnect_Parms, onDisconnectCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback_MetaData)) }; // 3558035683
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::NewProp_onDisconnectCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Disconnect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::MqttClientBase_eventDisconnect_Parms), Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Publish_Statics
	{
		struct MqttClientBase_eventPublish_Parms
		{
			FMqttMessage message;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMqttClientBase_Publish_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventPublish_Parms, message), Z_Construct_UScriptStruct_FMqttMessage, METADATA_PARAMS(nullptr, 0) }; // 3396971829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Publish_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Publish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Publish", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::MqttClientBase_eventPublish_Parms), Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Publish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Publish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Publish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics
	{
		struct MqttClientBase_eventSetOnErrorHandler_Parms
		{
			FScriptDelegate onErrorCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onErrorCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onErrorCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback = { "onErrorCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSetOnErrorHandler_Parms, onErrorCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback_MetaData)) }; // 3970711411
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::NewProp_onErrorCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnErrorHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::MqttClientBase_eventSetOnErrorHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics
	{
		struct MqttClientBase_eventSetOnMessageHandler_Parms
		{
			FScriptDelegate onMessageCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onMessageCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onMessageCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback = { "onMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSetOnMessageHandler_Parms, onMessageCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback_MetaData)) }; // 2142758941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::NewProp_onMessageCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnMessageHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::MqttClientBase_eventSetOnMessageHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics
	{
		struct MqttClientBase_eventSetOnPublishHandler_Parms
		{
			FScriptDelegate onPublishCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onPublishCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onPublishCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback = { "onPublishCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSetOnPublishHandler_Parms, onPublishCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback_MetaData)) }; // 999868145
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::NewProp_onPublishCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnPublishHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::MqttClientBase_eventSetOnPublishHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics
	{
		struct MqttClientBase_eventSetOnSubscribeHandler_Parms
		{
			FScriptDelegate onSubscribeCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSubscribeCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onSubscribeCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback = { "onSubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSetOnSubscribeHandler_Parms, onSubscribeCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback_MetaData)) }; // 3973143847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::NewProp_onSubscribeCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnSubscribeHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::MqttClientBase_eventSetOnSubscribeHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics
	{
		struct MqttClientBase_eventSetOnUnsubscribeHandler_Parms
		{
			FScriptDelegate onUnsubscribeCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onUnsubscribeCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_onUnsubscribeCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback = { "onUnsubscribeCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSetOnUnsubscribeHandler_Parms, onUnsubscribeCallback), Z_Construct_UDelegateFunction_MonsterMQTT_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback_MetaData)) }; // 1050737663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::NewProp_onUnsubscribeCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "SetOnUnsubscribeHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::MqttClientBase_eventSetOnUnsubscribeHandler_Parms), Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics
	{
		struct MqttClientBase_eventSubscribe_Parms
		{
			FString topic;
			int32 qos;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_qos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSubscribe_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_qos = { "qos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventSubscribe_Parms, qos), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::NewProp_qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Subscribe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::MqttClientBase_eventSubscribe_Parms), Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics
	{
		struct MqttClientBase_eventUnsubscribe_Parms
		{
			FString topic;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_topic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::NewProp_topic = { "topic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MqttClientBase_eventUnsubscribe_Parms, topic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::NewProp_topic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMqttClientBase, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::MqttClientBase_eventUnsubscribe_Parms), Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMqttClientBase_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMqttClientBase_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMqttClientBase);
	UClass* Z_Construct_UClass_UMqttClientBase_NoRegister()
	{
		return UMqttClientBase::StaticClass();
	}
	struct Z_Construct_UClass_UMqttClientBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnectDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPublishDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPublishDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubscribeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubscribeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnsubscribeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUnsubscribeDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnErrorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnErrorDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMqttClientBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterMQTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMqttClientBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMqttClientBase_Connect, "Connect" }, // 901922370
		{ &Z_Construct_UFunction_UMqttClientBase_Disconnect, "Disconnect" }, // 836093088
		{ &Z_Construct_UFunction_UMqttClientBase_Publish, "Publish" }, // 27770255
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnErrorHandler, "SetOnErrorHandler" }, // 4170277815
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnMessageHandler, "SetOnMessageHandler" }, // 2488070663
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnPublishHandler, "SetOnPublishHandler" }, // 2161232034
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnSubscribeHandler, "SetOnSubscribeHandler" }, // 1577439661
		{ &Z_Construct_UFunction_UMqttClientBase_SetOnUnsubscribeHandler, "SetOnUnsubscribeHandler" }, // 2840807993
		{ &Z_Construct_UFunction_UMqttClientBase_Subscribe, "Subscribe" }, // 975032188
		{ &Z_Construct_UFunction_UMqttClientBase_Unsubscribe, "Unsubscribe" }, // 2563899519
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// \xe5\xae\x83\xe7\xbb\xa7\xe6\x89\xbf\xe5\xad\x90UObjec\xe5\x92\x8cMqttclient\xe6\x8e\xa5\xe5\x8f\xa3\xe7\xb1\xbb\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe9\x9c\x80\xe8\xa6\x81\xe5\xaf\xb9\xe8\xbf\x99\xe4\xb8\xa4\xe4\xb8\xaa\xe8\x99\x9a\xe5\x87\xbd\xe6\x95\xb0\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xae\x9e\xe7\x8e\xb0\n" },
		{ "IncludePath", "MqttClientBase.h" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
		{ "ToolTip", "\xe5\xae\x83\xe7\xbb\xa7\xe6\x89\xbf\xe5\xad\x90UObjec\xe5\x92\x8cMqttclient\xe6\x8e\xa5\xe5\x8f\xa3\xe7\xb1\xbb\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe9\x9c\x80\xe8\xa6\x81\xe5\xaf\xb9\xe8\xbf\x99\xe4\xb8\xa4\xe4\xb8\xaa\xe8\x99\x9a\xe5\x87\xbd\xe6\x95\xb0\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xae\x9e\xe7\x8e\xb0" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate_MetaData[] = {
		{ "Comment", "//\xe5\x88\x9b\xe5\xbb\xba\xe4\xbb\xa3\xe7\x90\x86\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x8c\xe8\xbf\x99\xe6\xa0\xb7\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\x88\x9b\xe5\xbb\xba\xef\xbc\x8c\xe6\x8a\x8a\xe4\xbb\x96\xe4\xbb\xac\xe5\xbd\x93\xe4\xbd\x9c\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe4\xbb\xa3\xe7\x90\x86\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x8c\xe8\xbf\x99\xe6\xa0\xb7\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8c\xe5\x88\x9b\xe5\xbb\xba\xef\xbc\x8c\xe6\x8a\x8a\xe4\xbb\x96\xe4\xbb\xac\xe5\xbd\x93\xe4\xbd\x9c\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate = { "OnConnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnConnectDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate_MetaData)) }; // 3779030558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate = { "OnDisconnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnDisconnectDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate_MetaData)) }; // 3558035683
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate = { "OnPublishDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnPublishDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnPublishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate_MetaData)) }; // 999868145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate = { "OnMessageDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnMessageDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate_MetaData)) }; // 2142758941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate = { "OnSubscribeDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnSubscribeDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnSubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate_MetaData)) }; // 3973143847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate = { "OnUnsubscribeDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnUnsubscribeDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnUnsubscribeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate_MetaData)) }; // 1050737663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Private/MqttClientBase.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate = { "OnErrorDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMqttClientBase, OnErrorDelegate), Z_Construct_UDelegateFunction_MonsterMQTT_OnMqttErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate_MetaData)) }; // 3970711411
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMqttClientBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnConnectDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnDisconnectDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnPublishDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnMessageDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnSubscribeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnUnsubscribeDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMqttClientBase_Statics::NewProp_OnErrorDelegate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMqttClientBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMqttClientInterface_NoRegister, (int32)VTABLE_OFFSET(UMqttClientBase, IMqttClientInterface), false },  // 4187687481
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMqttClientBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMqttClientBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMqttClientBase_Statics::ClassParams = {
		&UMqttClientBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMqttClientBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMqttClientBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMqttClientBase()
	{
		if (!Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton, Z_Construct_UClass_UMqttClientBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMqttClientBase.OuterSingleton;
	}
	template<> MONSTERMQTT_API UClass* StaticClass<UMqttClientBase>()
	{
		return UMqttClientBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMqttClientBase);
	struct Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMqttClientBase, UMqttClientBase::StaticClass, TEXT("UMqttClientBase"), &Z_Registration_Info_UClass_UMqttClientBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMqttClientBase), 2425773441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_3298479057(TEXT("/Script/MonsterMQTT"),
		Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
