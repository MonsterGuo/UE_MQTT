// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "MqttClientBase.h"
#include "CoreMinimal.h"

#include "MqttClient.generated.h"

//前置声明，方便先定义类型的指针方便后续使用
class FMqttRunnable;

//定义Mqtt客户端对象
UCLASS()
class UMqttClient : public UMqttClientBase
{
	GENERATED_BODY()

	friend class FMqttRunnable;

public:
	// Uobject的销毁操作
	void BeginDestroy() override;
	// 链接操作
	void Connect(FMqttConnectionData connectionData, const FOnConnectDelegate& onConnectCallback) override;
	// 断开链接
	void Disconnect(const FOnDisconnectDelegate& onDisconnectCallback) override;
	// 订阅
	void Subscribe(FString topic, int qos) override;
	// 取消订阅的实现
	void Unsubscribe(FString topic) override;
	// 发布消息
	void Publish(FMqttMessage message) override;

public:
	//继承子UMqttClientBase对象的，实现它
	void Init(FMqttClientConfig configData) override;

private:
	// 任务
	FMqttRunnable* Task;
	// 线程
	FRunnableThread* Thread;
	// 客户端配置
	FMqttClientConfig ClientConfig;
};