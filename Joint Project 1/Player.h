// Player class declaration
#pragma once
#include "Globals.h"
#include "SFML/Graphics.hpp"

class Player
{
private:
	int speed{};
	int health{};
	int direction{};
	int score{};
	int timer{};
	sf::Sprite body{};
	sf::Texture directionTexture{};
	bool  alive{};

public:
	void increaseScore();
	void playerMovement();
	void playerDeath();
	void playerBlock();
	void collision();
	void setDirection(int t_direction);
	int getDirection();
	int getSpeed();
	void setSpeed(int t_speed);
	int getTime();
	void setTime(int t_time);
	int getScore();
	void setScore(int t_score);
	sf::Sprite getBody();
	void setBody(sf::Sprite t_body);
	sf::Texture getTexture();
	void setTexture(sf::Texture t_texture);
	void loadTextures();
};
