#pragma once
#include "State.h"

// �Q�[���Ǘ��N���X	
class GameManager {
	// �X�e�[�g�̃|�C���^�[
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	int num;

public:

	GameManager() : isRunning(true), num(-1) {
		Init();
	};

	void Init();

	// �X�e�[�g�̕ύX�֐�
	void ChangeState(std::unique_ptr<GameState> newState);

	// �X�V���\�b�h
	void Update(int num);

	bool getIsRun() const { return isRunning; }

	void Clear() {
		std::system("cls");
	}

};
