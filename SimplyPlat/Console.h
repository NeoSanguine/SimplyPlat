#ifndef CONSOLE_H
#define CONSOLE_H
#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <Windows.h>

class Console
{
public:
	void Red( std::string msg );//,WORD Color);
	void Yellow( std::string msg );
	void White( std::string msg );
	void Green( std::string msg );
	void Purple( std::string msg );

	static Console*Instance()
	{
		if (instance == NULL)
		{
			instance = new Console();
			return instance;
		}
		return instance;
	}

private:
	static Console*instance;
};

#endif CONSOLE_H


