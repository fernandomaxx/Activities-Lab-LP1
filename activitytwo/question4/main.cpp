//
// Created by fernando on 11/03/19.
//

#include <iostream>
#include <string>

#include "triangle.h"
#include "square.h"
#include "circle.h"

#define MAIN 1

#if MAIN

int main()
{
    Triangle triangle( "figure 1", 10, 5);
    Square square( "figure 2", 10);
    Circle circle( "figure 3", 1);

    std::cout << "Triangle Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Square Area: " << square.calculateArea() << std::endl;
    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
}

#endif
