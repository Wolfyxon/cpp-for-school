#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Program tworzący tablice jednowymiarowa\n";
    
    cout << "Podaj rozmiar tablicy: ";
    
    int size;
    cin >> size;

    int tab[size];

    for(int i=0;i<size;i++){
        cout << "Podaj wartosc elementu " << i << ": ";
        cin >> tab[i];
    }

    cout << "Elementy tablicy: ";
    for(int i=0;i<size;i++){
        cout << tab[i] << " ";
    }


    return 0;
}