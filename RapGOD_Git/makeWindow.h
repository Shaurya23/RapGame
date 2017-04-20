#pragma once
/*
	This class will be used to make window
	

*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Arrow.h"

class makeWindow
{
public:
	makeWindow();

	// int return to give us the option selected by user 1. Instructions 2. Start game 3. Exit
	int showMenu(); // We will display our menu on the window using this funciton

	void runGame(); // called to run the game

private:
	Arrow left[150];
	Arrow right[150];
	Arrow center[150];

};