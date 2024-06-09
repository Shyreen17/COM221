#include <iostream>
#include <limits>
using namespace std;

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    double base, height, length, width, side;

    while (true) {
        cout << "Select the shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 4.\n";
            continue;
        }

        if (choice == 4) {
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                if (!cin.fail() && base > 0 && height > 0) {
                    cout << "The area of the triangle is " << calculateTriangleArea(base, height) << "\n";
                } else {
                    cout << "Invalid input. Please enter positive numbers.\n";
                }
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                if (!cin.fail() && length > 0 && width > 0) {
                    cout << "The area of the rectangle is " << calculateRectangleArea(length, width) << "\n";
                } else {
                    cout << "Invalid input. Please enter positive numbers.\n";
                }
                break;
            case 3:
                cout << "Enter the side of the square: ";
                cin >> side;
                if (!cin.fail() && side > 0) {
                    cout << "The area of the square is " << calculateSquareArea(side) << "\n";
                } else {
                    cout << "Invalid input. Please enter a positive number.\n";
                }
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                break;
        }
    }

    return 0;
}
