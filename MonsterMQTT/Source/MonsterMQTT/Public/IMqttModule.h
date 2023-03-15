// Copyright (c) 2023 MonsterGuoGuo

#pragma once

#include "Modules/ModuleManager.h"

class IMqttModule : public IModuleInterface
{
public:

	static inline IMqttModule& Get()
	{
		//载入模块
		return FModuleManager::LoadModuleChecked<IMqttModule>("MonsterMQTT");
	}

	static inline bool IsAvailable()
	{
		//检查模块是否激活
		return FModuleManager::Get().IsModuleLoaded("MonsterMQTT");
	}
};
