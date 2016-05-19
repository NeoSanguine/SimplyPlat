#include "Graphics.h"
#include "Console.h"
#include <SDL.h>

using namespace std;

bool Graphics::init(string title, int windowWidth, int windowHeight)
{
	gScreen = NULL;
	gRenderer = NULL;
	gWindow = NULL;

	gWindow = SDL_CreateWindow( title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);

	if (gWindow == NULL)
	{
		//Console::Instance()Red( "Variable gWindow = null" );
		Console::Instance()->Red( "Variable gWindow = null" );
		return false;
	}

	gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
	gScreen = SDL_GetWindowSurface( gWindow );

	return true;

}

//getters

//Returns the main window
SDL_Window* Graphics::getWindow()
{
	return gWindow;
}

SDL_Surface* Graphics::getScreen()
{
	return gScreen;
}

SDL_Renderer* Graphics::getRenderer()
{
	return gRenderer;
}




void Graphics::draw()
{
	
}