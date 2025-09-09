#pragma once
#include "State.h"
#include "ResultState.h"

class InGameState : public GameState {
	int num;
public:
	void OnEnter(GameManager* manager) {
		std::cout << "インゲーム画面" << std::endl;
	}

	void OnUpdate(GameManager* manager, float deltaTime) {

		std::cin >> num;

		if (num == 1) {
			manager->ChangeState(std::make_unique<ResultState>());
		}
	}

	void OnExit(GameManager* manager) {
		std::cout << "インゲーム画面を終了" << std::endl;
	}
	const std::string GetName() const { return "InGame"; }
};
