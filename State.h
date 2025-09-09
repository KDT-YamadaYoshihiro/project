#pragma once
#include <string>
#include <memory>
#include <iostream>

class GameManager;

class GameState {
public:
	virtual ~GameState() = default;
	virtual void OnEnter(GameManager* manager) = 0;
	virtual void OnUpdate(GameManager* manager, int num) = 0;
	virtual void OnExit(GameManager* manager) = 0;
	virtual const std::string GetName() const = 0;
};

