#include <malloc.h>
#include <iostream>

#include "Enum.h"
#include "GameState.h"

int main()
{
	GameState g;
	STATE current = INIT;

	while (true)
	{
		switch (current)
		{
		case INIT: splash();
		case MAIN: current = mainMenu(); break;
		case PLAY: g.play();
		case GAME: current = g.update(); break;
		case EXIT: fareTheWell(); return 0;
		}
	}
}