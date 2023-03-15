// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMqttMessage;
struct FMqttConnectionData;
#ifdef MONSTERMQTT_MqttClientBase_generated_h
#error "MqttClientBase.generated.h already included, missing '#pragma once' in MqttClientBase.h"
#endif
#define MONSTERMQTT_MqttClientBase_generated_h

#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_SPARSE_DATA
#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOnErrorHandler); \
	DECLARE_FUNCTION(execSetOnUnsubscribeHandler); \
	DECLARE_FUNCTION(execSetOnSubscribeHandler); \
	DECLARE_FUNCTION(execSetOnMessageHandler); \
	DECLARE_FUNCTION(execSetOnPublishHandler); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOnErrorHandler); \
	DECLARE_FUNCTION(execSetOnUnsubscribeHandler); \
	DECLARE_FUNCTION(execSetOnSubscribeHandler); \
	DECLARE_FUNCTION(execSetOnMessageHandler); \
	DECLARE_FUNCTION(execSetOnPublishHandler); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMqttClientBase(); \
	friend struct Z_Construct_UClass_UMqttClientBase_Statics; \
public: \
	DECLARE_CLASS(UMqttClientBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterMQTT"), NO_API) \
	DECLARE_SERIALIZER(UMqttClientBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMqttClientBase*>(this); }


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMqttClientBase(); \
	friend struct Z_Construct_UClass_UMqttClientBase_Statics; \
public: \
	DECLARE_CLASS(UMqttClientBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterMQTT"), NO_API) \
	DECLARE_SERIALIZER(UMqttClientBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMqttClientBase*>(this); }


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClientBase(UMqttClientBase&&); \
	NO_API UMqttClientBase(const UMqttClientBase&); \
public:


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMqttClientBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMqttClientBase(UMqttClientBase&&); \
	NO_API UMqttClientBase(const UMqttClientBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMqttClientBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMqttClientBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMqttClientBase)


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnConnectDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnConnectDelegate); } \
	FORCEINLINE static uint32 __PPO__OnDisconnectDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnDisconnectDelegate); } \
	FORCEINLINE static uint32 __PPO__OnPublishDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnPublishDelegate); } \
	FORCEINLINE static uint32 __PPO__OnMessageDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnMessageDelegate); } \
	FORCEINLINE static uint32 __PPO__OnSubscribeDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnSubscribeDelegate); } \
	FORCEINLINE static uint32 __PPO__OnUnsubscribeDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnUnsubscribeDelegate); } \
	FORCEINLINE static uint32 __PPO__OnErrorDelegate() { return STRUCT_OFFSET(UMqttClientBase, OnErrorDelegate); }


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_10_PROLOG
#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_PRIVATE_PROPERTY_OFFSET \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_SPARSE_DATA \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_RPC_WRAPPERS \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_INCLASS \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_PRIVATE_PROPERTY_OFFSET \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_SPARSE_DATA \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_INCLASS_NO_PURE_DECLS \
	MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERMQTT_API UClass* StaticClass<class UMqttClientBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MqttBugfix2_Plugins_MonsterMQTT_Source_MonsterMQTT_Private_MqttClientBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
