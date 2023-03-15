// Copyright (c) 2023 MonsterGuoGuo

#include "IMqttModule.h"
#include "Interfaces/IPluginManager.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "MonsterMQTT"

class FMqttModule:public IMqttModule
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	void* mDllHandleMosquitto= nullptr;
	void* mDllHandleMosquittopp=nullptr;
};
//实现模块
IMPLEMENT_MODULE(FMqttModule, MonsterMQTT)

void FMqttModule::StartupModule()
{
	const FString PluginDir = IPluginManager::Get().FindPlugin(TEXT("MonsterMQTT"))->GetBaseDir();
	const FString DLLPath = PluginDir / TEXT("Binaries/Win64/");
	FPlatformProcess::PushDllDirectory(*DLLPath);

	mDllHandleMosquitto = FPlatformProcess::GetDllHandle(*(DLLPath + "mosquitto.dll"));
	mDllHandleMosquittopp = FPlatformProcess::GetDllHandle(*(DLLPath + "mosquittopp.dll"));

	FPlatformProcess::PopDllDirectory(*DLLPath);
}

void FMqttModule::ShutdownModule()
{
	if (mDllHandleMosquitto)
	{
		FPlatformProcess::FreeDllHandle(mDllHandleMosquitto);
		mDllHandleMosquitto = nullptr;
	}

	if (mDllHandleMosquittopp)
	{
		FPlatformProcess::FreeDllHandle(mDllHandleMosquittopp);
		mDllHandleMosquittopp = nullptr;
	}
}
