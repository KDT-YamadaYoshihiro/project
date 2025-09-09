#pragma once
#include <iostream>
#include <memory>

#include "State.h"

// �Q�[���Ǘ��N���X	
class GameManager {
	// �X�e�[�g�̃|�C���^�[
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;

public:

	GameManager() : isRunning(true), gameTime(0.0f) {}

	// �X�e�[�g�̕ύX�֐�
	void ChangeState(std::unique_ptr<GameState> newState) {
		if (currentState) {
			currentState->OnExit(this);
		}
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}

	// �X�V���\�b�h
	void Update(float deltaTime) {
		gameTime += deltaTime;
		if (currentState) {
			currentState->OnUpdate(this, deltaTime);
		}
	}

};