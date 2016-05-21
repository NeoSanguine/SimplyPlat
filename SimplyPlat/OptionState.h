#ifndef OPTIONSTATE_H_
#define OPTIONSTATE_H_

#pragma once
#include "State.h"
#include "Text2d.h"
#include "StateManager.h"

class OptionState : public State
{

public:
	OptionState( StateManager*stateManager );
	bool Init();
	void HandleEvents( SDL_Event gEvent );
	void Update( int deltaTime );
	void Render( SDL_Renderer*gRenderer );
	void Clean();



protected:

private:
	StateManager*stateManager;


};

#endif // OPTIONSTATE_H_