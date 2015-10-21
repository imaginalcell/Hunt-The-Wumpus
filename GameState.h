#pragma once
#include "Enum.h"
#include <string>
#include <iostream>

using std::string;

int getValidNum(int min, int max);
int rooms[5][3]{ { 1,2,3 },{ 0,3,4 },{ 0,2,4 },{ 0,3,4 } };
string roomNames[5] = {"Room 1","Room 2","Room 3","Room 4","Room 5"};
class Player { int currentRoom; void movePlayer(); };

class GameState
{
public:
	void play();
	STATE update();
};