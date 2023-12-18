#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Iloczyn parzystych elementow tablicy\n";

    cout << "Podaj rozmiar tablicy: ";
    
    int size;
    cin >> size;

    int tab[size];

    for(int i=0;i<size;i++){
        cout << "Podaj wartosc " << i+1 << " liczby: ";
        cin >> tab[i];
    }

    int mul = 0;
    for(int i=0;i<size;i++){
        int n = tab[i];
        if(n % 2 == 0) mul *= n;
    }

    cout << "Iloczyn: " << mul;
    return 0;
}