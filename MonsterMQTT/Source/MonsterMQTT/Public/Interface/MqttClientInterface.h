// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "UObject/Interface.h"

#include "Entities/MqttMessage.h"
#include "Entities/MqttConnectionData.h"
// 这个是有必要的，后续的继承函数中有用到它的
#include "Entities/MqttClientConfig.h"
#include "MqttClientInterface.generated.h"

DECLARE_DYNAMIC_DELEGATE(FOnConnectDelegate);
DECLARE_DYNAMIC_DELEGATE(FOnDisconnectDelegate);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPublishDelegate,int,mid);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMessageDelegate, FMqttMessage, message);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSubscribeDelegate, int, mid, const TArray<int>&, qos);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnsubscribeDelegate, int, mid);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMqttErrorDelegate, int, code, FString, message);

//客户端接口对象
//它和下面是一种组合形式
UINTERFACE(BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class MONSTERMQTT_API UMqttClientInterface : public UInterface
{
	GENERATED_BODY()
};

//客户端接口
class MONSTERMQTT_API IMqttClientInterface
{
	GENERATED_BODY()

public:
	
	/**
	* 连接到MQTT代理
	* @param connectionData -连接到MQTT代理所需的数据结构(主机url，端口，客户端id等)
	* @param onConnectCallback -客户端成功与MQTT代理建立连接后触发的回调函数处理程序
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void Connect(FMqttConnectionData connectionData, const FOnConnectDelegate& onConnectCallback) = 0;

	
	/**
	* 从MQTT代理断开连接
	* @param onDisconnectCallback -客户端从MQTT代理断开连接后触发的回调函数处理程序
	*/
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void Disconnect(const FOnDisconnectDelegate& onDisconnectCallback) = 0;

	/**
	 * 订阅的主题
	 * @param topic -主题名称
	 * @param qos - 服务质量
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void Subscribe(FString topic, int qos) = 0;

	/**
	 * 取消订阅主题
	 * @param topic - 订阅主题的名称
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void Unsubscribe(FString topic) = 0;

	/**
	 * 发布消息
	 * @param message - 结构与消息数据(主题，QoS，有效负载等)
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void Publish(FMqttMessage message) = 0;

	/**
	 * 为消息发布事件设置处理程序
	 * @param onPublishCallback -在客户端消息发布到MQTT代理后触发的回调函数处理程序
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void SetOnPublishHandler(const FOnPublishDelegate& onPublishCallback) = 0;

	/**
	 * 为消息接收事件设置处理程序
	 * @param onMessageCallback - 客户端从MQTT代理接收消息后触发回调函数处理程序
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void SetOnMessageHandler(const FOnMessageDelegate& onMessageCallback) = 0;

	/**
	 * 为订阅事件设置处理程序
	 * @param onSubscribeCallback - c在客户端订阅MQTT代理公开的主题后触发回调函数处理程序
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void SetOnSubscribeHandler(const FOnSubscribeDelegate& onSubscribeCallback) = 0;

	/**
	 * 为取消订阅事件设置处理程序
	 * @param onUnsubscribeCallback - 在客户端从MQTT代理公开的主题取消订阅后触发回调函数处理程序
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void SetOnUnsubscribeHandler(const FOnUnsubscribeDelegate& onUnsubscribeCallback) = 0;

	/**
	 * 为错误事件设置处理程序
	 * @param onErrorCallback - 在发生任何mqtt相关错误后触发的回调函数处理程序
	 */
	UFUNCTION(BlueprintCallable, Category = "MQTT")
	virtual void SetOnErrorHandler(const FOnMqttErrorDelegate& onErrorCallback) = 0;
};