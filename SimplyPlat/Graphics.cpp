#include "Graphics.h"
#include "Console.h"
#include <SDL.h>

using namespace std;

Graphics::Graphics()
{
	

}

bool Graphics::Init(string title, int windowWidth, int windowHeight)
{
	this->gScreen = NULL;
	this->gRenderer = NULL;
	this->gWindow = NULL;

	gWindow = SDL_CreateWindow( title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);

	if (gWindow == NULL)
	{
		Console::Instance()->Red( "Variable gWindow = null" );
		return false;
	}

	gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );

	if (gRenderer == NULL)
	{
		Console::Instance()->Red( "Variable: gRenderer = null" );
		return false;
	}

	gScreen = SDL_GetWindowSurface( gWindow );

	if (gScreen == NULL)
	{
		Console::Instance()->Red( "Variable: gScreen = NULL" );
		return false;
	}

	return true;

}

//getters

//Returns the main window
SDL_Window* Graphics::GetWindow()
{
	return gWindow;
}

SDL_Surface* Graphics::GetScreen()
{
	return gScreen;
}

SDL_Renderer* Graphics::GetRenderer()
{
	return gRenderer;
}



void Graphics::RenderClear()
{
	SDL_RenderClear( gRenderer );
}

void Graphics::RenderPresent()
{
	SDL_RenderPresent(gRenderer);
}

void Graphics::Clean()
{
	gScreen = NULL;
	gRenderer = NULL;
	gWindow = NULL;

	SDL_FreeSurface( gScreen );
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
}