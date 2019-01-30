

#include "Player.h"   // include Player header file

// Player function definitions here

void Player::increaseScore()
{
	score += 5;
}

void Player::playerMovement()
{
	if (direction == WEST)
	{
		body.move(-1.0f,0.0f);
		
		
	}
	if (direction == EAST)
	{
		body.move(1.0f, 0.0f);
		
	}
	if (direction == NORTH)
	{
		body.move(0.0f, -1.0f);
		body.setTextureRect(sf::IntRect(84, 250, 84, 74));
		
	}
	if (direction == SOUTH)
	{
		body.move(0.0f, 1.0f);
		body.setTextureRect(sf::IntRect(84, 0, 84, 74));
	}
}

void Player::playerDeath()
{
	

}

void Player::playerBlock()
{
}

void Player::collision()
{
}

void Player::setDirection(int t_direction)
{
	direction = t_direction;
}

int Player::getDirection()
{
	return direction;
}

int Player::getSpeed()
{
	return speed;
}

void Player::setSpeed(int t_speed)
{
	speed = t_speed;
}

int Player::getTime()
{
	return timer;
}

void Player::setTime(int t_time)
{
	timer = t_time;
}

int Player::getScore()
{
	return score;
}

void Player::setScore(int t_score)
{
	score = t_score;
}

sf::Sprite Player::getBody()
{
	return body;
}

void Player::setBody(sf::Sprite t_body)
{
	body = t_body;
}

sf::Texture Player::getTexture()
{
	return directionTexture;
}

void Player::setTexture(sf::Texture t_texture)
{
	directionTexture = t_texture;
}

void Player::loadTextures()
{

	directionTexture.loadFromFile("ASSETS\\IMAGES\\player.png");
	body.setTexture(directionTexture);
}
