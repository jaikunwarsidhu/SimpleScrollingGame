
#include "Game.h"
#include "instructions.h"

instructions::instructions()
// call super constructor
	:Button(
		"../Assets/instructions.png",
		"Instructions",
		INSTRUCTIONS, glm::vec2(400.0f, 550.0f)), m_isClicked(false)
{

}

instructions::~instructions()
{
}

bool instructions::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Mouse Button Clicked!" << std::endl;
			TheSoundManager::Instance()->playSound("menu", 0);
			m_isClicked = true;
			TheGame::Instance()->changeSceneState(SceneState::INSTRUCTIONS_SCENE);
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}


