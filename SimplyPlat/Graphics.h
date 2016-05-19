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
	bool init(string title, int windowWidth, int windowHeight);
	void draw();

	SDL_Surface*getScreen();
	SDL_Renderer*getRenderer();
	SDL_Window*getWindow();

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