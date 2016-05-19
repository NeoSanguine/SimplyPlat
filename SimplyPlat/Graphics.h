#pragma once
#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include <String>
#include <iostream>
#include <SDL.h>

using namespace std;

class Graphics
{
	
public:
	void init(string title, int windowWidth, int windowHeight);
	void draw();

protected:

private:
	
	// resolution changes
	int windowWidth;
	int windowHeight;
	string title;

	SDL_Surface*screen;
	SDL_Renderer*gRenderer;
	SDL_Window* gWindow;

	


}


#endif //GRAPHICS_H_