#pragma once
#include "Manager.h"

class ResultState : public GameState {

public:

	void OnEnter(GameManager* manager)override {
		std::cout << "���U���g���" << std::endl;
	}

	void OnUpdate(GameManager* manager, int num)override {

		std::cout << "10����͂�����I�����܂�" << std::endl;
		if (num == 10) {
			return;
		}
		
	}

	void OnExit(GameManager* manager) override {
		std::cout << "���U���g��ʂ��I��" << std::endl;
	}
	const std::string GetName() const { return "Result"; }
};
