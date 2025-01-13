#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main() {
    string text;
    
    cout << "Podaj text: ";
    std::getline(cin, text);

    for(int i = 0; i < text.length() - 1; i++) {
        char cur = text[i];
        char next = text[i + 1];

        cout << next << cur;
    }

    cout << endl;
}