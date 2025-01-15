#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::string, std::vector, std::map, std::cout, std::cin, std::endl;

const int LETTER_COUNT = 26;

vector<char> getChars() {
    vector<char> vec;

    for(int i = 0; i < LETTER_COUNT; i++) {
        vec.push_back('a' + i);
    }

    return vec;
}

map<char, char> randomKey() {
    vector<char> chars;
    map<char, char> res;

    for(char ch : chars) {
        char newCh = 0;

        while (newCh == 0 || res.count(newCh) != 0) {
            newCh = chars[rand() % 26];
        }

        res[ch] = newCh;
    }

    return res;
}

map<char, char> reverseKey(map<char, char> key) {
    map<char, char> res;

    for(auto entry : key) {
        res[entry.second] = entry.first;
    }

    return res;
}

int main() {
    int mode;

    cout << "Co chcesz zrobić?" << endl;
    cout << "1. Zaszyfruj" << endl;
    cout << "2. Odszyfruj" << endl;
    cout << "3. Wyjdź" << endl;

    cin >> mode;

    switch (mode) {
        case 1: {
            string text;

            cout << "Podaj tekst: ";
            std::getline(cin, text);



            break;
        }
    
        case 2: {
            break;
        }

        case 3: {
            return;
        }
        
        default:
            cout << "Nieznana komenda" << endl;
            break;
    }

    main();
}