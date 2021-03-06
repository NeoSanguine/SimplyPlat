#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#pragma once
#include "State.h"
#include "Text2d.h"
#include "StateManager.h"

class MenuState : public State
{

public:
	MenuState(StateManager*stateManager);
	bool Init();
	void HandleEvents( SDL_Event gEvent );
	void Update( int deltaTime );
	void Render( SDL_Renderer*gRenderer );
	void Clean();

	

protected:

private:
	StateManager*stateManager;

};

#endif // MENUSTATE_H_