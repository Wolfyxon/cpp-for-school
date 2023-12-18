#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Suma elementow tablicy podzielnych przez 7\n";

    cout << "Podaj rozmiar tablicy: ";
    
    int size;
    cin >> size;

    int tab[size];

    for(int i=0;i<size;i++){
        cout << "Podaj wartosc " << i+1 << " liczby: ";
        cin >> tab[i];
    }

    int sum = 0;
    for(int i=0;i<size;i++){
        int n = tab[i];
        if(n % 7 == 0) sum += n;
    }

    cout << "Suma: " << sum;
    return 0;
}