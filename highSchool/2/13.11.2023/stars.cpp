#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Gwiazdki\n";

    cout << "Podaj ilosc gwiazdek: ";
    int amt;
    cin >> amt;

    if(amt < 1) amt = 1;

    cout << "\n";
    for(int i=0;i<amt;i++){
        cout << "*";
    }
    
    cout << "\n";
    system("pause");
    return 0;
}