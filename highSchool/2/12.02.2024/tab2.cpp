// Napisz program tworzący tablicę jednowymiarową i wypisujący elementy tej tablicy.

#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]) {
    cout << SIGNATURE;
    cout << "Tablica dwuwymiarowa" << std::endl;

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

    cout << "Elementy tablicy:" << std::endl;
    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            cout << array[row][col];
        }
        if(row % rows == 0) cout << std::endl;
    }

    cout << std::endl;

    system("pause");
    return 0;
}