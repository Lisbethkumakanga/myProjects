pragma once
#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0) {}

    Square::Square(float length) : sideLength(length) {}

    Square::~Square() {}

    void Square::setSideLength(float length) {
        sideLength = length;
    }

    float Square::getSideLength() const {
        return sideLength;
    }
}

// Triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(float base, float height) : base(base), height(height) {}

    Triangle::~Triangle() {}

    void Triangle::setBase(float base) {
        this->base = base;
    }

    void Triangle::setHeight(float height) {
        this->height = height;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }
}

#include "Circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(float radius) : radius(radius) {}

    Circle::~Circle() {}

    void Circle::setRadius(float radius) {
        this->radius = radius;
    }

    float Circle::getRadius() const {
        return radius;
    }
}
