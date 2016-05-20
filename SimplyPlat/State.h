#ifndef STATE_H_
#define STATE_H_

#include <SDL.h>
#pragma once

class State
{
public:

	State() {}

	virtual bool Init() = 0;
	virtual void HandleEvents(SDL_Event gEvent) = 0;
	virtual void Update( int deltaTime ) = 0;
	virtual void Render( SDL_Renderer*renderer ) = 0;
	virtual void Clean() = 0;


protected:
	

private:
};


#endif // STATE_H_