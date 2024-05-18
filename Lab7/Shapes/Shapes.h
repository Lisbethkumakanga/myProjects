// Square.h
namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square(); // Default constructor
        Square(float length); // Overloaded constructor
        ~Square(); // Destructor
        void setSideLength(float length);
        float getSideLength() const;
    };
}

// Triangle.h
namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle(); // Default constructor
        Triangle(float base, float height); // Overloaded constructor
        ~Triangle(); // Destructor
        void setBase(float base);
        void setHeight(float height);
        float getBase() const;
        float getHeight() const;
    };
}

// Circle.h
namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle(); // Default constructor
        Circle(float radius); // Overloaded constructor
        ~Circle(); // Destructor
        void setRadius(float radius);
        float getRadius() const;
    };
}
