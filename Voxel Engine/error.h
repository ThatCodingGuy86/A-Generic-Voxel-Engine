#pragma once
#ifndef APIENTRY // Keep windows.h from redefining APIENTRY due to GLAD defining it beforehand
#include <windows.h>
#endif
#include <iostream>
#include <string>

void err(std::string str)
{
	HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(c, FOREGROUND_RED);

	std::cout << str;

	// I *think* this is the default? Maybe?
	SetConsoleTextAttribute(c, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));

}

