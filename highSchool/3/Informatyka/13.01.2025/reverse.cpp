#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main() {
    string text;
    string newText;

    cout << "Podaj text: ";
    cin >> text;

    for(char ch : text) {
        newText = ch + newText;
    }

    cout << newText;
}