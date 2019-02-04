#include "MainMenu.h"





MainMenu::MainMenu()
{
	optionCounterUp = 0;
	optionCounterDown = 0;

}
/// <summary>
/// self explanitory
/// </summary>
void MainMenu::setupText()
{
	overallText.loadFromFile("ASSETS/FONTS/PinkBazooka.ttf");
	titleText.setFont(overallText);
	titleText.setFillColor(sf::Color::Red);
	titleText.setCharacterSize(76);
	titleText.setPosition({ 350.0f, 150.0f });
	titleText.setString("Adventure Quest");
	for (int i = 0; i < MAX_OPTIONS; i++)
	{
		menuText[i].setFont(overallText);
		menuText[i].setCharacterSize(43);
		menuText[i].setFillColor(sf::Color::White);
		switch (i)
		{
		case 0:
			menuText[i].setPosition({ 400.0f,300.0f });
			menuText[i].setString("New Game");

			break;
		case 1:
			menuText[i].setPosition({ 400.0f,450.0f });
			menuText[i].setString("How to Play");

			break;
		case 2:
			menuText[i].setPosition({ 400.0f,600.0f });
			menuText[i].setString("Exit Game");

			break;
		}


	}


}
/// <summary>
/// sets up the objectt for the pointer 
/// </summary>
void MainMenu::setupOptionsAndPointers()
{

	optionSelector.setPointCount(3);
	optionSelector.setFillColor(sf::Color::Blue);
	optionSelector.setPosition({ 200.0f, 300.0f });
	optionSelector.setRadius(40);
}

bool MainMenu::getExisting()
{
	return existing;
}

void MainMenu::setExisting(bool t_showing)
{
	existing = t_showing;
}
/// <summary>
/// moves to new game
/// </summary>
void MainMenu::advanceToNewGame()
{
	if (optionSelector.getPosition().y == 300.f)
	{
		newGame = true;
		existing = false;

	}
}
/// <summary>
/// moves to options
/// </summary>
void MainMenu::advanceToOptions()
{

	if (optionSelector.getPosition().y == 450.f)
	{
		optionsMenu = true;
		existing = false;
	}
}
//closes game
void  MainMenu::exitGame()
{
	if (optionSelector.getPosition().y == 600.f)
	{
		closeGame = true;
		existing = false;
	}
}

/// <summary>
/// moves the pointer dun dun duh
/// </summary>
void MainMenu::movePointer()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		
		optionCounterDown++;//when down  is pressed it adds one to the counter
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{

		optionCounterDown--; //when up is pressed it takes one from the counter
	}
	if (optionCounterDown < 0)
	{
		optionCounterDown = 2; //sets it to the third option if up is pressed on the first option
	}
	else if (optionCounterDown > 2)
	{
		optionCounterDown = 0; //sets it to the first  option if down is pressed on the last option
	}
	switch (optionCounterDown)
	{
	case 0:
		optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
		break;
	case 1:
		optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
		break;
	case 2:
		optionSelector.setPosition(optionSelector.getPosition().x, menuText[optionCounterDown].getPosition().y);
		break;
	}

}
void MainMenu::Draw(sf::RenderWindow &t_window)
{
	t_window.draw(titleText);
	t_window.draw(optionSelector);
	for (int i = 0; i < MAX_OPTIONS; i++)
	{
		t_window.draw(menuText[i]);
		t_window.draw(options[i]);
	}
}

bool MainMenu::getNewGame()
{
	return newGame;
}

bool MainMenu::getOptionsMenu()
{
	return optionsMenu;
}

bool MainMenu::getExitGame()
{
	return closeGame;
}
void MainMenu::returnToMainMenu()
{
	if (newGame == false)
	{
		existing = true;
	}
}

void MainMenu::drawTexture(sf::RenderWindow & t_window)
{
	t_window.draw(background);
}

void MainMenu::loadtextures()
{

	
	menuBackground.loadFromFile("ASSETS\\IMAGES\\trueMenu.png");
	background.setTexture(menuBackground);
	background.setScale(2.5, 1.1);

}

