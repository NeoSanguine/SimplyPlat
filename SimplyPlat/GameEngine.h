#pragma once
#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

#include "Graphics.h"

class GameEngine
{

public:
	bool Init();

	void HandleEvents();
	void Update(int deltaTime);
	void Render();
	void Clean();

	bool Running()
	{
		return running;
	}

	void Quit()
	{
		running = false;
	}

	Graphics GetGraphics()
	{
		return graphics;
	}

protected:

private:
	Graphics graphics;
	bool running;

};

#endif // 