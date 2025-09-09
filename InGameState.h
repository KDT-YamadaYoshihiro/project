#pragma once
#include "State.h"
#include "ResultState.h"

class InGameState : public GameState {
	int num;
public:
	void OnEnter(GameManager* manager) {
		std::cout << "�C���Q�[�����" << std::endl;
	}

	void OnUpdate(GameManager* manager, float deltaTime) {

		std::cin >> num;

		if (num == 1) {
			manager->ChangeState(std::make_unique<ResultState>());
		}
	}

	void OnExit(GameManager* manager) {
		std::cout << "�C���Q�[����ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "InGame"; }
};
