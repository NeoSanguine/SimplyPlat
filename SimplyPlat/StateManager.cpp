#include "StateManager.h"
#include "State.h"
#include "MenuState.h"
#include "Console.h"

StateManager::StateManager()
{
	states = vector<State*>();
	Console::Instance()->Purple( "Loading StateManager" );
}

bool StateManager::Init()
{


	// makes sure the menu is the first state we load
	ChangeState( new MenuState() );

	return true;
}

void StateManager::HandleEvents( SDL_Event gEvent )
{
	if (!states.empty())
	{
		states.back()->HandleEvents( gEvent );
	}
}

void StateManager::Update( int deltaTime )
{
	if (!states.empty())
	{
		states.back()->Update( deltaTime );
	}
}

void StateManager::Render( SDL_Renderer*gRenderer )
{
	if (!states.empty())
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