#pragma once
#include <iostream>
#include <memory>

#include "State.h"

// ゲーム管理クラス	
class GameManager {
	// ステートのポインター
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	float gameTime;

public:

	GameManager() : isRunning(true), gameTime(0.0f) {}

	// ステートの変更関数
	void ChangeState(std::unique_ptr<GameState> newState) {
		if (currentState) {
			currentState->OnExit(this);
		}
		currentState = std::move(newState);
		currentState->OnEnter(this);
	}

	// 更新メソッド
	void Update(float deltaTime) {
		gameTime += deltaTime;
		if (currentState) {
			currentState->OnUpdate(this, deltaTime);
		}
	}

};