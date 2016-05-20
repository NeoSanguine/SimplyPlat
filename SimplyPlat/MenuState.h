#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#pragma once
#include "State.h"

class MenuState : public State
{

public:
	MenuState();
	bool Init();
	void HandleEvents( SDL_Event gEvent );
	void Update( int deltaTime );
	void Render( SDL_Renderer*gRenderer );
	void Clean();

	

protected:

private:


};

#endif // MENUSTATE_H_