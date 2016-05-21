#include "MenuState.h"
#include "Console.h"
#include "Text2d.h"
#include "OptionState.h"

using namespace std;

MenuState::MenuState( StateManager*stateManager)
{
	Console::Instance()->Purple( "Loading MenuState" );
	this->stateManager = stateManager;
}

bool MenuState::Init()
{
	stateManager->getText2d()->LoadFont( "TEST", "bin/font/font.ttf", "base", 100, 200 );
	stateManager->getText2d()->ChangeColor( { 255,255,0 } );
	return true;
}

void MenuState::HandleEvents( SDL_Event gEvent )
{
	switch (gEvent.type)
	{
		case SDL_KEYDOWN:
			if (gEvent.key.keysym.sym == SDLK_RETURN)
			{
				stateManager->ChangeState( new OptionState( stateManager ) );
			}
			break;
	}
}

void MenuState::Update( int deltaTime )
{

}

void MenuState::Render( SDL_Renderer*gRenderer )
{
	stateManager->getText2d()->Draw( "base" ,gRenderer);
}

void MenuState::Clean()
{
	stateManager->getText2d()->Clean( "base" );
}