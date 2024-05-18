// main.cpp

#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;

    // Get input for length and width from user
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    // Create an instance of Rectangle
    Rectangle rectangle;

    // Set length and width using accessor methods
    rectangle.setLength(length);
    rectangle.setWidth(width);

    // Output area of the rectangle
    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
