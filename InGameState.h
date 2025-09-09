#pragma once
#include "Manager.h"
#include "ResultState.h"

class InGameState : public GameState {

public:

	void OnEnter(GameManager* manager)override {
		std::cout << "�C���Q�[�����" << std::endl;
	}

	void OnUpdate(GameManager* manager, int num)override {

		std::cout << "1����͂����玟�̃X�N���[���Ɉړ�" << std::endl;
		if (num == 1) {
			manager->ChangeState(std::make_unique<ResultState>());
		}
	}

	void OnExit(GameManager* manager) override {
		std::cout << "�C���Q�[����ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "InGame"; }
};
