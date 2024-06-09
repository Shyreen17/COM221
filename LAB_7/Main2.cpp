#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
using namespace shapes;

int main() {
    while (true) {
        cout << "Options:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case 2: {
                float base, height;
                cout << "Enter the base length of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
