#include "Title.h"
#include "MainMenuState.h"

void TitleState::OnEnter(GameManager* manager)
{
	std::cout << "�^�C�g�����" << std::endl;
}

void TitleState::OnUpdate(GameManager* manager, int num)
{
	std::cout << "1����͂����玟�̃X�N���[���Ɉړ�" << std::endl;
	if (num == 1) {
		manager->ChangeState(std::make_unique<MainMenuState>());
	}

}

void TitleState::OnExit(GameManager* manager)
{
	std::cout << "�^�C�g����ʂ��I��" << std::endl;

}
