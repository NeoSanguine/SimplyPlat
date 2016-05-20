#include "GameEngine.h"
#include "Console.h"
#include "Text2d.h"

bool GameEngine::Init()
{

	if (!graphics.Init( "Simply Platform", 800, 600 ))
	{
		Console::Instance()->Red( "Failed to init graphics class!" );
		running = false;
	}
	Console::Instance()->Green( "Loaded graphics object" );



	 this->text2d = Text2d();
	 this->text2d.LoadFont( "TEST", "bin/font/font.ttf", "base", 100, 100);

	 stateManager = new StateManager();
	 
	 if (!stateManager->Init())
	 {
		 Console::Instance()->Red( "Failed to init StateManager " );
		 running = false;

	 }
	 else
		 Console::Instance()->Green( "Loaded State Manager" );



	running = true;

	return running;
}

void GameEngine::HandleEvents()
{
	while (SDL_PollEvent( &gEvent ) != 0)
	{

		stateManager->HandleEvents( gEvent );

		switch (gEvent.type)
		{
			case SDL_KEYDOWN:
			break;

			case SDL_KEYUP:
				break;

			case SDL_QUIT:
				this->Quit(); // if the "X" is pressed on the application, close the game
				break;
		}
	}
}


void GameEngine::Update(int deltaTime)
{
	stateManager->Update( deltaTime );
}

void GameEngine::Render()
{
	graphics.RenderClear();

	//Draw code goes here
	this->text2d.Draw( "base", graphics.GetRenderer() );
	stateManager->Render(graphics.GetRenderer());
	
	
	graphics.RenderPresent();
}

void GameEngine::Clean()
{
	graphics.Clean();
	text2d.Clean( "base" );

	SDL_Quit();
}