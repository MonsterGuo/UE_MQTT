// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "MqttConnectionData.generated.h"

USTRUCT(BlueprintType)
struct MONSTERMQTT_API FMqttConnectionData
{
	GENERATED_BODY()

	/** User login. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Login;

	/** User password. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MQTT")
	FString Password;
};