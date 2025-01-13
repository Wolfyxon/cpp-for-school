#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main() {
    string text;

    cout << "Podaj text: ";
    cin >> text;

    for(int i = 0; i < text.length(); i++) {
        if(i % 2 == 0) {
            cout << text[i];
        }
    }

    cout << endl;

    for(int i = 0; i < text.length(); i++) {
        if(i % 2 != 0) {
            cout << text[i];
        }
    }

    cout << endl;
}