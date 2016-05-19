#pragma once
#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include <String>
#include <iostream>
#include <SDL.h>
#include <vector>

using namespace std;

class Graphics
{
	
public:
	bool Init(string title, int windowWidth, int windowHeight);
	
	
	void RenderClear();
	void RenderPresent();
	void Clean();

	SDL_Surface*GetScreen();
	SDL_Renderer*GetRenderer();
	SDL_Window*GetWindow();

	Graphics();

protected:

private:
	
	// resolution changes
	int windowWidth;
	int windowHeight;
	string title;

	SDL_Surface*gScreen;
	SDL_Renderer*gRenderer;
	SDL_Window* gWindow;

	


};


#endif //GRAPHICS_H_