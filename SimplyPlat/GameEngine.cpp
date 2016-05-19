#include "GameEngine.h"
#include "Console.h"
#include "Text2d.h"

bool GameEngine::Init()
{

	if (!graphics.Init( "Simply Platform", 800, 600 ))
	{
		Console::Instance()->Red( "Failed to init graphics class!" );
		return false;
	}
	Console::Instance()->Green( "Loaded graphics object" );



	 this->text2d = Text2d();
	 this->text2d.LoadFont( "bin/font/font.ttf", "base", 100, 100);

	running = true;

	return running;
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
	this->text2d.Draw( "text", "base", {255,255,255,255}, graphics.GetRenderer() );
	
	graphics.RenderPresent();
}

void GameEngine::Clean()
{
	graphics.Clean();

	SDL_Quit();
}