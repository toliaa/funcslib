
#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace Geometry
{
    class Rectangle
    {
    private:
        double length;
        double width;

    public:
        // Default constructor
        Rectangle();

        // Parameterized constructor
        Rectangle(double length, double width);

        // Method to get the area of the rectangle
        double getArea() const;

        // Method to get the perimeter of the rectangle
        double getPerimeter() const;

        // Method to resize the rectangle
        void resize(double newLength, double newWidth);
    };
}

#endif // RECTANGLE_H

