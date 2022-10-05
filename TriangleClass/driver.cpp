#include <iostream>
#include <iomanip> // for std::setw
#include "specification.h"

const int SPACELENGTH = 10;


void printTriangle(Triangle);


int main()
{
    Triangle triangle0;

    printTriangle(triangle0);

    return 0;
}


void printTriangle(Triangle triangle) { // absolutely not a good way of doing this
    std::cout << "" << std::setw(SPACELENGTH) << "*\n";
    std::cout << " " << std::setw(SPACELENGTH) << "**\n";
    std::cout << "  " << std::setw(SPACELENGTH) << "* *\n";
    std::cout << "   " << std::setw(SPACELENGTH) << "*  *\n";
    std::cout << "    " << std::setw(SPACELENGTH) << "*   *\n";
    std::cout << "     " << std::setw(SPACELENGTH) << "*    *\n";
    std::cout << "      " << std::setw(SPACELENGTH) << "*     *\n";
    std::cout << "       " << std::setw(SPACELENGTH) << "*      *\n";
    std::cout << "        " << std::setw(SPACELENGTH) << "*       *\n";
    std::cout << "        " << std::setw(SPACELENGTH) << "**********\n";
}
