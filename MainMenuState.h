#pragma once
#include "State.h"
#include "InGameState.h"

class MainMenuState : public GameState {
	int num;
public:
	void OnEnter(GameManager* manager) {
		std::cout << "メインメニュー画面" << std::endl;
	}

	void OnUpdate(GameManager* manager, float deltaTime) {

		std::cin >> num;

		if (num == 1) {
			manager->ChangeState(std::make_unique<InGameState>());
		}
	}

	void OnExit(GameManager* manager) {
		std::cout << "メインメニュー画面を終了" << std::endl;
	}
	const std::string GetName() const { return "MainMenu"; }
};

