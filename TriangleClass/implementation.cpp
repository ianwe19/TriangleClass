#include "specification.h"
#include <cmath> // for sqrt


// CONSTRUCTOR
Triangle::Triangle() {
	this->adjacentLength = 0;
	this->oppositeLength = 0;
}

// GETTERS
float Triangle::getHypotenuse() {
	// a^2 + b^2 = c^2
	return sqrt(this->adjacentLength * this->adjacentLength + this->oppositeLength * this->oppositeLength);
}

float Triangle::getAdjacent() {
	return this->adjacentLength;
}

float Triangle::getOpposite() {
	return this->oppositeLength;
}

float Triangle::getArea() {
	this->area = 0.5 * this->adjacentLength * this->oppositeLength;
	return this->area;
}

float Triangle::getPerimeter() {
	this->perimeter = this->adjacentLength + this->oppositeLength + this->getHypotenuse();
	return this->perimeter;
}

// SETTERS
bool Triangle::setAdjacent(float adjacent) {
	bool accepted = false;

	// set adjacent length if valid
	if (adjacent < 0) {
		accepted = false;
	}
	else {
		this->adjacentLength = adjacent;
		accepted = true;
	}

	return accepted;
}

bool Triangle::setOpposite(float opposite) {
	bool accepted = false;

	// set opposite length if valid
	if (opposite < 0) {
		accepted = false;
	}
	else {
		this->oppositeLength = opposite;
		accepted = true;
	}

	return accepted;
}