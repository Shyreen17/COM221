#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float len, wid;

    cout << "Enter the length of the first rectangle: ";
    cin >> len;
    cout << "Enter the width of the first rectangle: ";
    cin >> wid;

    Rectangle rect1;
    rect1.setLength(len);
    rect1.setWidth(wid);

    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    cout << "Enter the length of the second rectangle: ";
    cin >> len;
    cout << "Enter the width of the second rectangle: ";
    cin >> wid;

    Rectangle rect2(len, wid);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
