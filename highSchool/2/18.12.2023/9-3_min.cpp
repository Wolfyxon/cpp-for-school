#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::min_element;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Najmniejszy element tablicy\n";

    cout << "Podaj rozmiar tablicy: ";
    
    int size;
    cin >> size;

    int tab[size];

    for(int i=0;i<size;i++){
        cout << "Podaj wartosc " << i+1 << " liczby: ";
        cin >> tab[i];
    }

    cout << "Najmniejszy element: " << min_element(tab,tab+size);

    return 0;
}