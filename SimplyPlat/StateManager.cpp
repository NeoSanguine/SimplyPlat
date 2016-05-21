#include "StateManager.h"
#include "State.h"
#include "MenuState.h"
#include "Console.h"
#include "Text2d.h"

StateManager::StateManager()
{
	states = vector<State*>();
	states.clear();
	this->text2d = new Text2d();
	Console::Instance()->Purple( "Loading StateManager" );
}

bool StateManager::Init()
{
	// makes sure the menu is the first state we load
	ChangeState( new MenuState(this) );

	return true;
}

void StateManager::HandleEvents( SDL_Event gEvent )
{
	for (int i = 0; i < (int)states.size(); i++)
	{
		states.back()->HandleEvents( gEvent );
	}
}

void StateManager::Update( int deltaTime )
{
	for (int i = 0; i < (int)states.size(); i++)
	{
		states.back()->Update( deltaTime );
	}
}

void StateManager::Render( SDL_Renderer*gRenderer )
{
	for (int i = 0; i < (int)states.size(); i++)
	{
		states.back()->Render( gRenderer );
	}

}

void StateManager::Clean()
{
	states.clear();
}


void StateManager::ChangeState( State * state )
{
	if (!states.empty())
	{
		//clean the last state before loading a new one
		states.back()->Clean();
	}

	states.push_back( state );
	states.back()->Init();
}

void StateManager::PushState( State*state )
{

}

void StateManager::PopState()
{

}