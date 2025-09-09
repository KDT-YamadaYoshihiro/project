#pragma once
#include "Manager.h"
#include "InGameState.h"

class MainMenuState : public GameState {
	
public:

	void OnEnter(GameManager* manager)override {
		std::cout << "メインメニュー画面" << std::endl;
	}

	void OnUpdate(GameManager* manager, int num) override {

		std::cout << "1を入力したら次のスクリーンに移動" << std::endl;
		if (num == 1) {
			manager->ChangeState(std::make_unique<InGameState>());
		}
	}

	void OnExit(GameManager* manager) override {
		std::cout << "メインメニュー画面を終了" << std::endl;
	}
	const std::string GetName() const { return "MainMenu"; }
};

