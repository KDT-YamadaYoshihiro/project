#pragma once
#include "Manager.h"

class TitleState : public GameState {

public:

	void OnEnter(GameManager* manager) override;
	void OnUpdate(GameManager* manager, int num) override;
	void OnExit(GameManager* manager) override;
	const std::string GetName() const { return "Titile"; }
};