#ifndef STATEMANAGER_H_
#define STATEMANAGER_H_
#pragma once

#include <SDL.h>
#include <vector>
#include "State.h"
#include "Text2d.h"

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

	Text2d*getText2d()
	{
		return text2d;
	}

protected :
	

private:
	Text2d*text2d;
	vector<State*> states;

};

#endif // STATEMANAGER_H_

