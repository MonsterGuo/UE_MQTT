// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "MqttMessage.generated.h"

//这个结构体可以在蓝图中创建
USTRUCT(BlueprintType)
struct MONSTERMQTT_API FMqttMessage
{
	GENERATED_BODY()

	/** Message content. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Message;

	/** Message topic. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Topic;

	/** Retain flag. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	bool Retain;

	/** Quality of signal. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	int Qos;
};