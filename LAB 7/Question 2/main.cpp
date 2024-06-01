#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;

    // Prompt user for length and width for first rectangle
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;

    // Create an instance of Rectangle using the default constructor
    Rectangle rect1;

    // Set length and width for first rectangle using accessor methods
    rect1.setLength(length);
    rect1.setWidth(width);

    // Calculate and output area for first rectangle
    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    // Prompt user for length and width for second rectangle
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    // Create another instance of Rectangle using the overloaded constructor
    Rectangle rect2(length, width);

    // Calculate and output area for second rectangle
    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}
