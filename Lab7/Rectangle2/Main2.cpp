// main.cpp

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    class Rectangle{
    float length;
    float width;

    // Get input for length and width from user for the first rectangle
    std::cout << "Enter length of the first rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the first rectangle: ";
    std::cin >> width;

    // Create an instance of Rectangle using the default constructor
    Rectangle rectangle1;

    // Set length and width using accessor methods
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    // Output area of the first rectangle
    std::cout << "Area of the first rectangle: " << rectangle1.calculateArea() << std::endl;

    // Get input for length and width from user for the second rectangle
    std::cout << "\nEnter length of the second rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the second rectangle: ";
    std::cin >> width;

    // Create another instance of Rectangle using the overloaded constructor
    Rectangle rectangle2(float length,float width);

    // Output area of the second rectangle
    std::cout<<"Area of the second rectangle: " << rectangle2.calculateArea() << std::endl;

    return 0;
}
},
