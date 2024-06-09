#include <iostream>
#include <string>
using namespace std;

int main() {
    int* dynamicInteger = nullptr;
    string* dynamicString = nullptr;

    dynamicInteger = new int;
    dynamicString = new string;

    cout << "Enter an integer: ";
    cin >> *dynamicInteger;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, *dynamicString);

    cout << "You have entered the integer: " << *dynamicInteger << endl;
    cout << "You have entered the string: " << *dynamicString << endl;

    delete dynamicInteger;
    delete dynamicString;

    return 0;
}
