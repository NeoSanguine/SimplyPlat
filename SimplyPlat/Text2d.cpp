#include "Text2d.h"
#include "Console.h"


Text2d::Text2d()
{
	if (TTF_WasInit())
	{
		Console::Instance()->Green( "Text2D: TTF has already been initialized" );
		return; 
	}
	else
	{
		Console::Instance()->Green( "Text2D: Loading TTF framework" );
		TTF_Init();
	}
	
}

void Text2d::ChangeText(string text)
{
	this->text = text;
}

void Text2d::ChangeColor( SDL_Color color )
{
	this->color = color;
}

//stores the font within a map to be called by the font name 
void Text2d::LoadFont( string text, string filePath, string fontName,  int x, int y, int size, SDL_Color color )
{
	this->filePath = filePath;
	this->size = size;
	this->color = color;
	this->x = x;
	this->y = y;
	this->text = text;

	this->font = NULL;

	this->font = TTF_OpenFont( this->filePath.c_str(), this->size );

	if (font == NULL)
	{
		Console::Instance()->Red( "Variable: font = NULL" );
	}
	
	fonts[fontName] = font;
}

//draws the font to the screen
void Text2d::Draw(string fontName, SDL_Renderer*renderer )
{
	SDL_Surface*tempSurface = NULL;
	SDL_Texture* tempTexture = NULL;


	tempSurface = TTF_RenderText_Blended( fonts[fontName], this->text.c_str(), this->color );

	if (tempSurface == NULL)
		Console::Instance()->Red( "Text2d: tempSurface = NULL " );

	tempTexture = SDL_CreateTextureFromSurface( renderer, tempSurface );

	

	SDL_Rect src; 
	SDL_Rect dst;

	src.x = src.y = 0;
	src.w = dst.w = tempSurface->w;
	src.h = dst.h = tempSurface->h;

	dst.x = this->x;
	dst.y = this->y;

	SDL_FreeSurface( tempSurface );
	tempSurface = NULL;

	SDL_RenderCopyEx( renderer, tempTexture, &src, &dst, 0, 0, SDL_FLIP_NONE );
	SDL_DestroyTexture( tempTexture );

}

void Text2d:: Clean(string fontName)
{

	
	this->font = NULL;
	this->size = NULL;
	this->x = 0;
	this->y = 0;


	this->filePath.clear();
	this->text.clear();
	this->fonts.clear();

	fonts[fontName] = NULL;
	TTF_CloseFont( fonts[fontName] );
}
