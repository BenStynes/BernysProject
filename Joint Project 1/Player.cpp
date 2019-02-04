

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
			body.move(1.0f, 0.0f);
			body.setTexture(directionTextureWest);


		}
		if (direction == EAST)
		{
			body.move(-1.0f, 0.0f);
			body.setTexture(directionTextureEast);
		}
		if (direction == NORTH)
		{
			body.move(0.0f, -1.0f);
			body.setTexture(directionTextureNorth);


		}
		if (direction == SOUTH)
		{
			body.move(0.0f, 1.0f);
			body.setTexture(directionTextureSouth);
		}
	


 if (body.getPosition().x < 0)
	{

		body.setPosition(body.getPosition().x + 17,body.getPosition().y);
 }

 if (body.getPosition().y < 0)
	{

		body.setPosition(body.getPosition().x ,body.getPosition().y + 17);
	}


	 if (body.getPosition().x > SCREEN_WIDTH - 50)
	{

		body.setPosition(body.getPosition().x - 17, body.getPosition().y);
	}

 if (body.getPosition().y > SCREEN_HEIGHT - 50)
	{

		body.setPosition(body.getPosition().x, body.getPosition().y - 17);
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


void Player::loadTextures()
{

	directionTextureNorth.loadFromFile("ASSETS\\IMAGES\\player_up.png");
	directionTextureSouth.loadFromFile("ASSETS\\IMAGES\\player_down.png");
	directionTextureEast.loadFromFile("ASSETS\\IMAGES\\player_left.png");
	directionTextureWest.loadFromFile("ASSETS\\IMAGES\\player_right.png");


	body.setTexture(directionTextureNorth);
}
