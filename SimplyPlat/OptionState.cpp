#include "OptionState.h"
#include "Console.h"
#include "Text2d.h"

using namespace std;

OptionState::OptionState( StateManager*stateManager )
{
	this->stateManager = stateManager;
	Console::Instance()->Purple( "Loading OptionState" );
}

bool OptionState::Init()
{
	stateManager->getText2d()->LoadFont( "TEST", "bin/font/font.ttf", "base", 100, 300);
	//stateManager->getText2d().LoadFont( "TEST", "bin/font/font.ttf", "base", 100, 300 );
	//text2d.ChangeColor( { 255,255,0 } );
	return true;
}

void OptionState::HandleEvents( SDL_Event gEvent )
{

}

void OptionState::Update( int deltaTime )
{

}

void OptionState::Render( SDL_Renderer*gRenderer )
{
	stateManager->getText2d()->Draw( "base", gRenderer );
}

void OptionState::Clean()
{
	stateManager->getText2d()->Clean( "base" );
}