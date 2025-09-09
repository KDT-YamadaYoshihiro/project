#pragma once
#include "State.h"
#include "MainMenuState.h"

class TitleState : public GameState {
	int num;
public:
	void OnEnter(GameManager* manager) {
		std::cout << "�^�C�g�����" << std::endl;
	}

	void OnUpdate(GameManager* manager, float deltaTime) {
		
		std::cin >> num;

		if (num == 1) {
			manager->ChangeState(std::make_unique<MainMenuState>());
		}
	}

	void OnExit(GameManager* manager) {
		std::cout << "�^�C�g����ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "Titile"; }
};