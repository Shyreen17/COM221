#include <iostream> 

using namespace std;

int main() {
    int numbersArray[5];
    int *pPointer = nullptr;
    pPointer = numbersArray;

    *pPointer = 10; 
    pPointer++;
    *pPointer = 20; 

    pPointer++;
    *pPointer = 30; 

    pPointer = numbersArray + 3;
    *pPointer = 40;

    pPointer = numbersArray + 4;
    *pPointer = 50;

    for(int n = 0; n < 5; n++) {
        cout << numbersArray[n] << ", ";
    }

    return 0;
}
