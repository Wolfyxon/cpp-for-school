#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

void shift(string text, int offset) {
    cout << offset << ": ";

    for(char ch : text) {
        char nch = (int)ch + offset;
        cout << nch;
    }

    cout << endl;
}

int main() {
    string text;

    cout << "Podaj text: ";
    std::getline(cin, text);

    for(int i = 0; i < 26; i++) {
        shift(text, i);
    }
}