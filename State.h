#pragma once
#include "Manager.h"
#include <string>

class GameState {
public:
	virtual ~GameState() = default;
	virtual void OnEnter(GameManager* manager) = 0;
	virtual void OnUpdate(GameManager* manager, float deltaTime) = 0;
	virtual void OnExit(GameManager* manager) = 0;
	virtual const std::string GetName() const = 0;
};