#include <iostream>
#include <limits>

using namespace std;

int main() {
    int userInput;

    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> userInput;

        if (!cin.fail() && userInput >= 5 && userInput <= 10) {
            cout << "Your input value has been accepted.\n";
            break;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. ";
        }
    }

    return 0;
}
