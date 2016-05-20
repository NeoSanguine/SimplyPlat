#include "MenuState.h"
#include "Console.h"

using namespace std;

MenuState::MenuState()
{
	Console::Instance()->Purple( "Loading MenuState" );
}

bool MenuState::Init()
{
	return true;
}

void MenuState::HandleEvents( SDL_Event gEvent )
{

}

void MenuState::Update( int deltaTime )
{

}

void MenuState::Render( SDL_Renderer*gRenderer )
{

}

void MenuState::Clean()
{

}