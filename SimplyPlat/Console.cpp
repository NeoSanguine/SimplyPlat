#include "Console.h"
int k;
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

Console*Console::instance = 0;

void Console::Red( std::string msg )//, WORD Color)
{
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5b);
	//system(color);
	SetConsoleTextAttribute( hConsole, 0x0C );
	std::cout << "ERROR: " << msg.c_str() << std::endl;
	SetConsoleTextAttribute( hConsole, 7 );
}

void Console::Yellow( std::string msg )
{
	SetConsoleTextAttribute( hConsole, 0x0E );
	std::cout << "WARNING: " << msg.c_str() << std::endl;
	SetConsoleTextAttribute( hConsole, 7 );
}

void Console::White( std::string msg )
{
	SetConsoleTextAttribute( hConsole, 0x07 );
	std::cout << msg.c_str() << std::endl;
	SetConsoleTextAttribute( hConsole, 7 );
}

void Console::Green( std::string msg )
{
	SetConsoleTextAttribute( hConsole, 0x0A );
	std::cout << msg.c_str() << std::endl;
	SetConsoleTextAttribute( hConsole, 7 );
}

void Console::Purple( std::string msg )
{
	SetConsoleTextAttribute( hConsole, 0x0D );
	std::cout << msg.c_str() << std::endl;
	SetConsoleTextAttribute( hConsole, 7 );
}