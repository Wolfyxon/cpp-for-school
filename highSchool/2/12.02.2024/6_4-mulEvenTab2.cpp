// Napisz program obliczający iloczyn elementów parzystych - tablicy dwuwymiarowej
#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]) {
    cout << SIGNATURE << std::endl;
    cout << "Iloczyn parzystych elementow tablicy dwuwymiarowej" << std::endl;

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

    int mul = 0;
    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            int num = array[row][col];
            if(num % 2 != 0) continue;
            mul *= num;
        }
    }

    cout << "Wynik: " << mul << std::endl;

    system("pause");
    return 0;
}