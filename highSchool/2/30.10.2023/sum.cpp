#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Sumowanie\n";

    float a, b, sum;
    cout << "Sumowanie liczb\n";
    cout << "Podaj 1 liczbe: ";
    cin >> a;
    cout << "\nPodaj 2 liczbe: ";
    cin >> b;

    sum = a+b;
    cout << "\nSuma: " << sum;

    system("pause");
    return 0;
}