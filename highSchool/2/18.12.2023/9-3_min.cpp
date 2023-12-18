#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

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

    int elm = tab[0];
    for(int i=0; i<size; i++) {
      if(elm>tab[i]) {
         elm=tab[i];
      }
   }
   
   cout << "Najmniejszy element: " << elm;

    return 0;
}