#include "Graphics.h"
#include "Console.h"

using namespace std;

void Graphics::init(string title, int windowWidth, int windowHeight)
{
	screen = NULL;
	gRenderer = NULL;
	gWindow = NULL;

	gWindow = SDL_CreateWindow( title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);

	if (gWindow == NULL)
	{
		Console::Instance.Red( "Variable gWindow = null" );
	}

	gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
	screen = SDL_GetWindowSurface( gWindow );


}


void Graphics::draw()
{
	
}