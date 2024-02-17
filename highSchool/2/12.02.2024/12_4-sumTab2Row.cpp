// Napisz program sumujący elementy w każdym wierszu - tablicy dwuwymiarowej

#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]) {
    cout << SIGNATURE << std::endl;
    cout << "Suma elementow kazdego wiersza tablicy 2 wymiarowej" << std::endl;

    int rows;
    int cols;

    cout << "Podaj liczbe wierszy: ";
    cin >> rows;

    cout << "Podaj liczbe kolumn: ";
    cin >> cols;

    int array[rows][cols];

    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            cout << "Podaj wartosc (" << row << ", " << col << "): ";
            cin >> array[row][col];
        }
    }


    cout << "-- Wyniki: --" << std::endl;

    for(int row = 0; row < rows; row++) {
        int sum = 0;
        for(int col = 0; col < cols; col++) {
            sum += array[row][col];
        }
        cout << row << ": " << sum << std::endl;
    }

    system("pause");
    return 0;
}