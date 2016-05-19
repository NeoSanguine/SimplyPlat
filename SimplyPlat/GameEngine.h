#pragma once
#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

#include "Graphics.h"
#include "Text2d.h"


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

	Text2d text2d;

protected:

private:
	
	Graphics graphics;
	bool running;

};

#endif // 