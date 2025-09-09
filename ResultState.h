#pragma once
#include "State.h"
#include "Title.h"

class ResultState : public GameState {
	int num;
public:
	void OnEnter(GameManager* manager) {
		std::cout << "リザルト画面" << std::endl;
	}

	void OnUpdate(GameManager* manager, float deltaTime) {

		std::cin >> num;

		if (num == 1) {
			manager->ChangeState(std::make_unique<TitleState>());
		}
		else {
			return;
		}
	}

	void OnExit(GameManager* manager) {
		std::cout << "リザルト画面を終了" << std::endl;
	}
	const std::string GetName() const { return "Result"; }
};
