
#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>

namespace shapes {
    float Area::calculateSquareArea(const Square& square) {
        float side = square.getSideLength();
        return side * side;
    }

    float Area::calculateTriangleArea(const Triangle& triangle) {
        float base = triangle.getBase();
        float height = triangle.getHeight();
        return 0.5f * base * height;
    }

    float Area::calculateCircleArea(const Circle& circle) {
        float radius = circle.getRadius();
        return M_PI * radius * radius;
    }
}
