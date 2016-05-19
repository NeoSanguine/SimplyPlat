#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "Graphics.h"

int main( int argc, char* args[] )
{
	int i;
	Graphics graphics;

	graphics = Graphics();
	graphics.init( "Simply Platform", 600, 400 );

	std::cin >> i;

	return 0;
}