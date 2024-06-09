#include <iostream>
using namespace std;

int main() {
    int rows = 0, cols = 0;
    double** dynamicArray = nullptr;

    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "Invalid input. Enter the number of rows (1-3): ";
        cin >> rows;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> cols;
    while (cols < 1 || cols > 3) {
        cout << "Invalid input. Enter the number of columns (1-3): ";
        cin >> cols;
    }

    dynamicArray = new double*[rows];
    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new double[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    cout << "The values in the 2D array are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
