// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "MqttClientConfig.generated.h"

USTRUCT(BlueprintType)
struct MONSTERMQTT_API FMqttClientConfig
{
	GENERATED_BODY()

	/** 主机URL. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString HostUrl;

	/** 主机端口 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	int Port;

	/**唯一的客户端ID */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString ClientId;

	/** 两个发布/订阅任务执行之间的最大时间(以毫秒表示)。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	int EventLoopDeltaMs{-1};
};