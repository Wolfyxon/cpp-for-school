#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>
#include <numeric>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Czekam na K...\n";

    char a;
    cin >> a;
    while(a != 'k'){
        cout << "Next\n";
        cin >> a;
    }

    cout << "Kliknieto K";
    system("pause");
    return 0;
}