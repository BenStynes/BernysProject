
#include<iostream>
#include "Player.h"   // include Player header file

// Player function definitions here

void Player::increaseScore()
{
	score += 5;
}
/// <summary>
/// movement
/// </summary>
void Player::playerMovement()
{
	
	
		if (direction == WEST)
		{
			body.move(speed, 0.0f);
			body.setTexture(directionTextureWest);//sets texture
			std::cout << std::to_string(body.getPosition().x) << "  "<<  std::to_string(body.getPosition().y);

		}
		if (direction == EAST)
		{
			body.move(-speed, 0.0f);
			body.setTexture(directionTextureEast);//sets texture
			std::cout << std::to_string(body.getPosition().x) << "  " << std::to_string(body.getPosition().y);
		}
		if (direction == NORTH)
		{
			body.move(0.0f, -speed);
			body.setTexture(directionTextureNorth);//sets texture
			std::cout << std::to_string(body.getPosition().x) << "  " << std::to_string(body.getPosition().y);

		}
		if (direction == SOUTH)
		{
			body.move(0.0f, speed);
			body.setTexture(directionTextureSouth);//sets texture
			std::cout << std::to_string(body.getPosition().x) << "  " << std::to_string(body.getPosition().y);
		}
	


 if (body.getPosition().x < 45)
	{

		body.setPosition(45 ,body.getPosition().y);
 }

 if (body.getPosition().y < 45)
	{

		body.setPosition(body.getPosition().x ,45);
	}


	 if (body.getPosition().x > SCREEN_WIDTH -45 -body.getGlobalBounds().width)
	{

		body.setPosition(SCREEN_WIDTH - 45 - body.getGlobalBounds().width, body.getPosition().y);
	}

 if (body.getPosition().y > SCREEN_HEIGHT- 45 - body.getGlobalBounds().height)
	{

	 body.setPosition(body.getPosition().x,SCREEN_HEIGHT- 45 - body.getGlobalBounds().height);
	
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

void Player::setPostion(float t_x, float t_y)
{
	body.setPosition(t_x, t_y);
}

/// <summary>
/// loading textures 
/// </summary>
void Player::loadTextures()
{

	directionTextureNorth.loadFromFile("ASSETS\\IMAGES\\player_up.png");
	directionTextureSouth.loadFromFile("ASSETS\\IMAGES\\player_down.png");
	directionTextureEast.loadFromFile("ASSETS\\IMAGES\\player_left.png");
	directionTextureWest.loadFromFile("ASSETS\\IMAGES\\player_right.png");


	body.setTexture(directionTextureNorth);
}
