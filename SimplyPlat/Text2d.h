#ifndef TEXT2D_H_
#define TEXT2D_H_
#pragma once

#include <SDL_ttf.h>
#include <string>
#include <map>

using namespace std;

class Text2d
{
public:

	Text2d();

	void LoadFont( string text, string filePath, string fontName,  int x, int y, int size = 48, SDL_Color color = {255,255,255,255} );
	void Draw( string fontName, SDL_Renderer*renderer );
	void Clean(string fontName);

	// helper methods
	void ChangeText(string text);
	void ChangeColor( SDL_Color color );

protected:

private:

	int size;
	int x;
	int y;

	string filePath;
	string text;
	string fontName;

	map<string, TTF_Font*>fonts;

	TTF_Font*font;
	SDL_Color color;
	

	
	

};


#endif // TEXT2D_H_