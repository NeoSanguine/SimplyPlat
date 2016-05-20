#ifndef STATEMANAGER_H_
#define STATEMANAGER_H_
#pragma once

#include <SDL.h>
#include <vector>
#include "State.h"

using namespace std;

class StateManager
{
public:

	StateManager();

	bool Init();
	
	void HandleEvents(SDL_Event gEvent);
	void Update( int deltaTime );
	void Render( SDL_Renderer*gRenderer );
	void Clean();

	void ChangeState( State*state );
	void PushState( State*state );
	void PopState();

private:

	vector<State*> states;

};

#endif // STATEMANAGER_H_

