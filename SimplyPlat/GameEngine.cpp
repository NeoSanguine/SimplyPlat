#include "GameEngine.h"
#include "Console.h"

bool GameEngine::Init()
{

	if (!graphics.Init( "Simply Platform", 800, 600 ))
	{
		Console::Instance()->Red( "Failed to init graphics class!" );
		return false;
	}
	Console::Instance()->Green( "Loaded graphics object" );



	running = true;
	return true;
}

void GameEngine::HandleEvents()
{

}


void GameEngine::Update(int deltaTime)
{

}

void GameEngine::Render()
{
	graphics.RenderClear();

	//Draw code goes here
	
	graphics.RenderPresent();
}

void GameEngine::Clean()
{
	graphics.Clean();

	SDL_Quit();
}