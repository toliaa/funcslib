
#include <iostream>
#include "../Mylib/Rectangle.h"
int main()
{
    // Create a rectangle with length 5 and width 3
    Geometry::Rectangle myRectangle(5.0, 3.0);

    // Display the initial state of the rectangle
    std::cout << "Initial Rectangle:" << std::endl;
    std::cout << "Area: " << myRectangle.getArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.getPerimeter() << std::endl;

    // Resize the rectangle
    myRectangle.resize(8.0, 4.0);

    // Display the updated state of the rectangle
    std::cout << "\nResized Rectangle:" << std::endl;
    std::cout << "Area: " << myRectangle.getArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.getPerimeter() << std::endl;

    return 0;
}
