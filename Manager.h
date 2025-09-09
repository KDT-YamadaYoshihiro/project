#pragma once
#include "State.h"

// ゲーム管理クラス	
class GameManager {
	// ステートのポインター
	std::unique_ptr<GameState> currentState;
	bool isRunning;
	int num;

public:

	GameManager() : isRunning(true), num(-1) {
		Init();
	};

	void Init();

	// ステートの変更関数
	void ChangeState(std::unique_ptr<GameState> newState);

	// 更新メソッド
	void Update(int num);

	bool getIsRun() const { return isRunning; }

	void Clear() {
		std::system("cls");
	}

};
