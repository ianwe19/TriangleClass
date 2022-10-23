#ifndef __TRIANGLE__
#define __TRIANGLE__

#include <iostream>

// CLASS TRIANGLE
class Triangle {
private:
	float hypotenuseLength;
	float adjacentLength;
	float oppositeLength;
	float area;
	float perimeter;

public:
	// CONSTRUCTOR
	Triangle();

	// GETTERS
	float getHypotenuse();
	float getAdjacent();
	float getOpposite();
	float getArea();
	float getPerimeter();

	// SETTERS
	bool setAdjacent(float);
	bool setOpposite(float);
}; // end - Triangle
#endif