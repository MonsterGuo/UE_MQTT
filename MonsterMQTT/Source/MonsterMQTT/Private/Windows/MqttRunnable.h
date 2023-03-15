// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"

#include "Entities/MqttMessage.h"
#include "MqttTask.h"

#include <queue>
#include <string>

// 出现了，这里有相互包含的情况
class UMqttClient;

class FMqttRunnable : public FRunnable
{
public:

	FMqttRunnable(UMqttClient* mqttClient, int updateDeltaMs = -1);
	virtual ~FMqttRunnable();
	//初始化过程
	bool Init() override;
	// 运行过程
	uint32 Run() override;
	// 停止运行过程
	void Stop() override;
	// 压栈任务
	void PushTask(FMqttTaskPtr task);
	// 停止运行
	void StopRunning();
	// 是否是激活的
	bool IsAlive() const;

private:
	//是否正在运行的标识
	bool bKeepRunning =false;
	//更新的间隔ms
	int iUpdateDeltaMs;
	// 任务列队指针
	std::queue<FMqttTaskPtr>* TaskQueue;
	// 运用原子操作的任务列队
	FCriticalSection* TaskQueueLock;
	// 指定客户端
	UMqttClient* client;

public:

	std::string Host;
	std::string ClientId;
	std::string Username;
	std::string Password;
	
	int32 Port = 3080;

	void OnConnect();
	void OnDisconnect();
	void OnPublished(int mid);
	void OnMessage(FMqttMessage message);
	void OnSubscribe(int mid, const TArray<int> qos);
	void OnUnsubscribe(int mid);
	void OnError(int errCode, FString message);
};