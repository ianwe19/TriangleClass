#include <iostream>
#include <iomanip> // for std::setw
#include "specification.h"

const int SPACELENGTH = 25;


void printTriangle(Triangle);


int main()
{
    Triangle triangle0;

    triangle0.setAdjacent(21.4);
    triangle0.setOpposite(2);

    printTriangle(triangle0);

    return 0;
}


void printTriangle(Triangle triangle) {
    std::cout << std::fixed << std::setprecision(2) << std::noshowpoint;

    std::cout << "" << std::setw(SPACELENGTH) << "*\n";
    std::cout << " " << std::setw(SPACELENGTH) << "**\n";
    std::cout << "  " << std::setw(SPACELENGTH) << "* *\n";
    std::cout << "   " << std::setw(SPACELENGTH) << "*  *\n";
    std::cout << "    " << std::setw(SPACELENGTH) << "*   *\n";


    std::cout << std::setw(18) << "Opposite Side =  " << triangle.getOpposite();
    std::cout << "   *    *";


    std::cout << "    Hypotenuse Side = " << triangle.getHypotenuse() << "\n";

    std::cout << "      " << std::setw(SPACELENGTH) << "*     *\n";
    std::cout << "       " << std::setw(SPACELENGTH) << "*      *\n";
    std::cout << "        " << std::setw(SPACELENGTH) << "*       *\n";
    std::cout << "          " << std::setw(SPACELENGTH) << "**********\n\n";

    std::cout << std::setw(SPACELENGTH) << "                       Adjacent Side = " << triangle.getAdjacent() << "\n\n";

    std::cout << "The area of the triangle is     : " << triangle.getArea() << "\n";
    std::cout << "The perimeter of the triangle is: " << triangle.getPerimeter() << "\n";
}
