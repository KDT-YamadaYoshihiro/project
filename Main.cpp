#include "Manager.h"

int num;
std::shared_ptr<GameManager> manager = std::make_shared<GameManager>();

int main() {


	while (manager->getIsRun())
	{
		manager->Update(num);
		std::cin >> num;
		manager->Clear();
	}

}