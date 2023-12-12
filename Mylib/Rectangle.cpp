// Rectangle.cpp
#include "Rectangle.h"

namespace Geometry
{
    // Implementation of the default constructor
    Rectangle::Rectangle() : length(0.0), width(0.0) {}

    // Implementation of the parameterized constructor
    Rectangle::Rectangle(double newLength, double newWidth) : length(newLength), width(newWidth) {}

    // Implementation of the method to get the area of the rectangle
    double Rectangle::getArea() const
    {
        return length * width;
    }

    // Implementation of the method to get the perimeter of the rectangle
    double Rectangle::getPerimeter() const
    {
        return 2 * (length + width);
    }

    // Implementation of the method to resize the rectangle
    void Rectangle::resize(double newLength, double newWidth)
    {
        length = newLength;
        width = newWidth;
    }
}
