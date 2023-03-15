// Copyright (c) 2023 MonsterGuoGuo
#include "MqttBPLibrary.h"
#include "Windows/MqttClient.h"


TScriptInterface<IMqttClientInterface> UMqttBPLibrary::CreateMqttClient(FMqttClientConfig config)
{
	UE_LOG(LogTemp, Warning, TEXT("MQTT => Creating MQTT client..."));
	//创建一个MQTT对象
	UMqttClient* MqttClient = NewObject<UMqttClient>();
	MqttClient->Init(config);
	TScriptInterface<IMqttClientInterface> MqttClientInterface;
	MqttClientInterface.SetObject(MqttClient);
	MqttClientInterface.SetInterface(Cast<IMqttClientInterface>(MqttClient));
	return MqttClientInterface;
}