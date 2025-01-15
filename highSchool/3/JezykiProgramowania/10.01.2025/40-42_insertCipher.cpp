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

bool hasValue(map<char, char> key, char value) {
    for(auto entry : key) {
        if(entry.second == value) return true;
    }

    return false;
}

map<char, char> randomKey() {
    vector<char> chars = getChars();
    map<char, char> res;

    for(char ch : chars) {
        char newCh = 0;

        while (newCh == 0 || hasValue(res, newCh)) {
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

string replace(string text, map<char, char> key) {
    string res;

    for(auto ch : text) {
        res += key[ch];
    }

    return res;
}

string input() {
    string res;

    cin.ignore();
    std::getline(cin, res);

    return res;
}

void loop(map<char, char> key) {
    int mode;

    cout << "Co chcesz zrobić?" << endl;
    cout << "1. Zaszyfruj" << endl;
    cout << "2. Odszyfruj" << endl;
    cout << "3. Wyjdź" << endl;

    cin >> mode;

    switch (mode) {
        case 1: {
            cout << "Podaj tekst: ";

            string text = input();

            cout << replace(text, key);

            break;
        }
    
        case 2: {
            cout << "Podaj zaszyfrowany tekst: ";

            string text = input();

            cout << replace(text, reverseKey(key));

            break;
        }

        case 3: {
            return;
        }
        
        default:
            cout << "Nieznana komenda";
            break;
    }

    cout << endl;
    loop(key);
}

int main() {
    map<char, char> key = randomKey();

    cout << "Klucz:";

    for(auto entry : key) {
        cout << entry.first << " -> " << entry.second << "\n";
    }

    cout << endl;

    loop(key);
}