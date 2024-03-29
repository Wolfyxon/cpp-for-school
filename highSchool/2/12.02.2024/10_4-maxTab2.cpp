// Napisz program znajdujący maksymalny element - tablicy dwuwymiarowej
#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>
#include <limits.h>

using std::cout;
using std::cin;

int main(int argc, char *argv[]) {
    cout << SIGNATURE << std::endl;
    cout << "Maksymalny element tablicy 2 wymiarowej" << std::endl;

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

    int max = INT_MIN;
    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            int num = array[row][col];
            if(num > max) max = num;
        }
    }

    cout << "Wynik: " << max << std::endl;

    system("pause");
    return 0;
}