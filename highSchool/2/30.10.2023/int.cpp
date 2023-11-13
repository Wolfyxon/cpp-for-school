#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc,char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Sprawdzanie czy podano liczbe całkowita\n";
    cout << "Podaj liczbe: ";

    int a;
    cin >> a;

    if(a > 0) cout << "\nPodano liczbe całkowita.";
    else  cout << "Podano liczbe niecałkowita.";

    return 0;
}