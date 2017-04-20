#pragma once

#include <iostream>
#include <stdlib.h>
#include <string.h>

class Arrow
{
public:
	Arrow(); // Create a drawable arrow 



private:
	// These will change based on sfml library 
	// They are just holders to understand requirements, All or none of the fields can be there

	int color;
	int size;
	int img;
	int location; // Left, Center or Right

};