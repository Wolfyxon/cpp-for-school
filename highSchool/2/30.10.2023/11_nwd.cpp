#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>
#include <numeric>

using std::cin;
using std::cout;
using std::gcd;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "NWD\n";

    cout << "Podaj 1 liczbe: ";
    int a;
    cin >> a;
    cout << "\nPodaj 2 liczbe: ";
    int b;
    cin >> b;

    cout << "NWD wynosi: " << gcd(a,b);

    system("pause");
    return 0;
}