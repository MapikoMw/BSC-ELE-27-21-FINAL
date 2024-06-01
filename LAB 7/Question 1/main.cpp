#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;

    // Prompt user for length and width
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Create an instance of Rectangle
    Rectangle rect;

    // Set length and width using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and output area
    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
