#include "Title.h"
#include "MainMenuState.h"

void TitleState::OnEnter(GameManager* manager)
{
	std::cout << "タイトル画面" << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, int num)
{
	std::cout << "1を入力したら次のスクリーンに移動" << std::endl;
	if (num == 1) {
		manager->ChangeState(std::make_unique<MainMenuState>());
	}

}

void TitleState::OnExit(GameManager* manager)
{
	std::cout << "タイトル画面を終了" << std::endl;

}
