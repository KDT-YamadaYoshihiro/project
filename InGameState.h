#pragma once
#include "Manager.h"
#include "ResultState.h"

class InGameState : public GameState {

public:

	void OnEnter(GameManager* manager)override {
		std::cout << "インゲーム画面" << std::endl;
	}

	void OnUpdate(GameManager* manager, int num)override {

		std::cout << "1を入力したら次のスクリーンに移動" << std::endl;
		if (num == 1) {
			manager->ChangeState(std::make_unique<ResultState>());
		}
	}

	void OnExit(GameManager* manager) override {
		std::cout << "インゲーム画面を終了" << std::endl;
	}
	const std::string GetName() const { return "InGame"; }
};
