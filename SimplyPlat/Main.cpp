#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "GameEngine.h"

int main( int argc, char* args[] )
{
	GameEngine gameEngine;

	gameEngine.Init();

	while (gameEngine.Running())
	{
		gameEngine.HandleEvents();
		gameEngine.Update( 600 );
		gameEngine.Render();
	}
	gameEngine.Clean();

	return 0;
}