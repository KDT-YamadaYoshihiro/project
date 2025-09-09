#pragma once
#include "Manager.h"

class ResultState : public GameState {

public:

	void OnEnter(GameManager* manager)override {
		std::cout << "リザルト画面" << std::endl;
	}

	void OnUpdate(GameManager* manager, int num)override {

		std::cout << "10を入力したら終了します" << std::endl;
		if (num == 10) {
			return;
		}
		
	}

	void OnExit(GameManager* manager) override {
		std::cout << "リザルト画面を終了" << std::endl;
	}
	const std::string GetName() const { return "Result"; }
};
