// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "Interface/MqttClientInterface.h"
#include "Entities/MqttClientConfig.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "MqttBPLibrary.generated.h"

UCLASS()
class MONSTERMQTT_API UMqttBPLibrary: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable,Category="MQTT")
	static TScriptInterface<IMqttClientInterface> CreateMqttClient(FMqttClientConfig config);
	
};
