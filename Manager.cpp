#include "Manager.h"
#include "Title.h"


void GameManager::Init()
{
	ChangeState(std::make_unique<TitleState>());
}

void GameManager::ChangeState(std::unique_ptr<GameState> newState)
{

	if (currentState) {
		currentState->OnExit(this);
	}
	currentState = std::move(newState);
	currentState->OnEnter(this);

}

void GameManager::Update(int num)
{
	if (num == 10) {
		isRunning = false;
	}
	if (currentState) {
		currentState->OnUpdate(this, num);
	}

}
