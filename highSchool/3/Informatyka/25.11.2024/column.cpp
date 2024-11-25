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

    string encrypted;

    for(int i = 0; i < key; i++) {        
        for(int ii = i; ii < encrypted.length(); ii += key) {
            encrypted += text[ii];
        }
    }

    cout << "Zaszyfrowany text:" << endl;
    cout << encrypted;
}