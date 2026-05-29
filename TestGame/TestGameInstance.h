#pragma once

#include <RaylibFramework/GameInstance.h>

class TestGameInstance : public GameInstance
{
public:
	//default is the same as leaving empty but resets variables 
	TestGameInstance() = default;

public:
	void Init() override;
	void ShutDown() override;
	void Tick(float dt) override;
	void Render() override;

};