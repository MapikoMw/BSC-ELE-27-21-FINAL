#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;

    do {
        cout << "Select a shape to calculate its area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                float side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case '2': {
                float base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case '3': {
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
