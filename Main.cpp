#include <iostream>
#include "Manager.h"
#include "State.h"

float time;
std::shared_ptr<GameManager> manager;

int main() {

	manager->Update(time);

}