// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Windows/MqttClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERMQTT_MqttClient_generated_h
#error "MqttClient.generated.h already included, missing '#pragma once' in MqttClient.h"
#endif
#define MONSTERMQTT_MqttClient_generated_h

#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_SPARSE_DATA
#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_RPC_WRAPPERS
#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_ACCESSORS
#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttClient(); \
	friend struct Z_Construct_UClass_UMqttClient_Statics; \
public: \
	DECLARE_CLASS(UMqttClient, UMqttClientBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterMQTT"), NO_API) \
	DECLARE_SERIALIZER(UMqttClient)


#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMqttClient(); \
	friend struct Z_Construct_UClass_UMqttClient_Statics; \
public: \
	DECLARE_CLASS(UMqttClient, UMqttClientBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterMQTT"), NO_API) \
	DECLARE_SERIALIZER(UMqttClient)


#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClient(UMqttClient&&); \
	NO_API UMqttClient(const UMqttClient&); \
public: \
	NO_API virtual ~UMqttClient();


#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClient(UMqttClient&&); \
	NO_API UMqttClient(const UMqttClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClient) \
	NO_API virtual ~UMqttClient();


#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_14_PROLOG
#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_SPARSE_DATA \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_RPC_WRAPPERS \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_ACCESSORS \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_INCLASS \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_SPARSE_DATA \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_ACCESSORS \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_INCLASS_NO_PURE_DECLS \
	FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERMQTT_API UClass* StaticClass<class UMqttClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MqttUE5_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_Windows_MqttClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
