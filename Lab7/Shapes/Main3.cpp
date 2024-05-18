// main.cpp
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace shapes;

int main() {
    int choice;
    do {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Calculate the area of a square" << std::endl;
        std::cout << "2. Calculate the area of a triangle" << std::endl;
        std::cout << "3. Calculate the area of a circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                float length;
                std::cout << "Enter the side length of the square: ";
                std::cin >> length;
                Square square(length);
                std::cout << "Area of the square: " << Area::calculateSquareArea(square) << std::endl;
                break;
            }
            case 2: {
                float base, height;
                std::cout << "Enter the base and height of the triangle: ";
                std::cin >> base >> height;
                Triangle triangle(base, height);
                std::cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << std::endl;
                break;
            }
            case 3: {
                float radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                Circle circle(radius);
                std::cout << "Area of the circle: " << Area::calculateCircleArea(circle) << std::endl;
                break;
            }
            case 4:
                std::cout << "Exiting program..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
