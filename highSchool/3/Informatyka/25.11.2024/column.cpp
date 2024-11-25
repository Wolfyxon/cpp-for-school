#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(void) {
    string text;
    cout << "Podaj jawny tekst: ";
    cin >> text;

    int key;
    cout << "Podaj klucz: ";
    cin >> key;

    for(int i = 0; i < text.length(); i++) {
        cout << text[i];

        if(i % key == 0) {
            cout << endl;
        }
    }
    cout << endl;

    for(int i = 0; i < key; i++) {        
        for(int ii = i; ii < text.length(); ii += key) {
            cout << text[ii];
        }
    }

    cout << endl;
}