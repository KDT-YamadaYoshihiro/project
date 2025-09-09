#pragma once
#include "Manager.h"
#include "InGameState.h"

class MainMenuState : public GameState {
	
public:

	void OnEnter(GameManager* manager)override {
		std::cout << "���C�����j���[���" << std::endl;
	}

	void OnUpdate(GameManager* manager, int num) override {

		std::cout << "1����͂����玟�̃X�N���[���Ɉړ�" << std::endl;
		if (num == 1) {
			manager->ChangeState(std::make_unique<InGameState>());
		}
	}

	void OnExit(GameManager* manager) override {
		std::cout << "���C�����j���[��ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "MainMenu"; }
};

