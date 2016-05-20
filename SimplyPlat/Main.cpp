#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "GameEngine.h"

namespace
{
	const int FPS = 60;
	const int MAX_FRAME_TIME = 1000 / FPS;
}

int main( int argc, char* args[] )
{
	GameEngine gameEngine;

	gameEngine.Init();

	int LAST_UPDATE_TIME = SDL_GetTicks();

	while (gameEngine.Running())
	{
		const int CURRENT_TIME_MS = SDL_GetTicks();
		int ELAPSED_TIME_MS = CURRENT_TIME_MS - LAST_UPDATE_TIME;
		gameEngine.HandleEvents();
		gameEngine.Update( std::fmin(ELAPSED_TIME_MS, FPS) );
		gameEngine.Render();
		LAST_UPDATE_TIME = CURRENT_TIME_MS;

		if (ELAPSED_TIME_MS < MAX_FRAME_TIME)
		{
			SDL_Delay( MAX_FRAME_TIME - ELAPSED_TIME_MS );
		}

		//const int ms_per_frame = 1000/*ms*/ / kFps;
		//const int elapsed_time_ms = SDL_GetTicks() - start_time_ms;
		//if (elapsed_time_ms < ms_per_frame)
		//{
		//	SDL_Delay(1000/*ms*/ / kFps/*fps*/ - elapsed_time_ms);
		//}

	}
	gameEngine.Clean();

	return 0;
}