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
	// return this->hypotenuseLength;
	return this->adjacentLength * this->oppositeLength;
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