#include "specification.h"


// CONSTRUCTOR
Triangle::Triangle() {
	this->hypotenuseLength = 0;
	this->adjacentLength = 0;
	this->oppositeLength = 0;
	this->area = 0;
	this->perimeter = 0;
}

// GETTERS
float Triangle::getHypotenuse() {
	return this->hypotenuseLength;
}

float Triangle::getAdjacent() {
	return this->adjacentLength;
}

float Triangle::getOpposite() {
	return this->oppositeLength;
}

float Triangle::getArea() {
	return this->area;
}

float Triangle::getPerimeter() {
	return this->perimeter;
}

// SETTERS
bool Triangle::setHypotenuse(float hypotenuse) {
	bool accepted = false;

	// set hypotenuse length if valid
	if (hypotenuse < 0) {
		accepted = false;
	}
	else {
		this->hypotenuseLength = hypotenuse;
		accepted = true;
	}

	return accepted;
}

bool Triangle::setAdjacent(float) {

}

bool Triangle::setOpposite(float) {

}