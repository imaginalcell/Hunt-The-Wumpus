#include "GameState.h"
#include <random>
#include <iostream>


void Player::movePlayer()
{
	std::cout << "pick room" << std::endl;
	for (int i = 0; i < 3; ++i)
	{
		std::cout << i << ":" << roomNames[rooms[currentRoom][i]] << std::endl;
		std::cout << std::endl << "==>";

		currentRoom = rooms[currentRoom][getValidNum(1, 3) - 1];
	}
}

void GameState::play()
{
	system("cls");
}

STATE GameState::update()
{

}