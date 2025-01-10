#include <iostream>
#include <string>
#include <vector>

using std::string, std::vector, std::cin, std::cout, std::endl;

int main() {
    cout << "Podaj słowa: ";
    
    string input;
    std::getline(cin, input);

    vector<string> words;   
    string current;

    for(char ch : input) {
        if(ch == *" ") {
            if(current.length() != 0) {
                words.push_back(current);
                current.clear();
            }
        } else {
            current += ch;
        }
    }

    if(current.length() != 0) {
        words.push_back(current);
    }
    
    for(int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << " ";
    }

    cout << endl;
}