#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::string;
using std::to_string;

enum System {
    DECIMAL,
    BINARY,
    HEX,
    OCT
};

const string SYSTEM_NAMES[] = {
    "Dziesietny",
    "Binarny",
    "Szesnastkowy",
    "Ósemkowy"
};

System inputSystem(string query) {
    int inp;

    cout << query << ": ";
    cin >> inp;

    if(inp < 1 || inp > sizeof(SYSTEM_NAMES) / sizeof(string)) {
        cout << "Nieznany system" << endl;
        return inputSystem(query);
    }

    return (System) (inp - 1);
}

string nconvert(int number, int base) {
    string res;

    while(number > 0) {
        res += to_string(number % base);
        number /= base;
    }

    return res;
}

int main(void) {
    for(int i = 0; i < sizeof(SYSTEM_NAMES) / sizeof(string); i++) {
        cout << i + 1 << ". " << SYSTEM_NAMES[i] << endl;;
    }

    System from = inputSystem("Podaj źródłowy system");
    System to = inputSystem("Podaj końcowy system");

    cout << "Podaj liczbę w systemie: " << SYSTEM_NAMES[from] << ": " << endl;

    string input;
    cin >> input;

    int baseType;

    switch (from) {
        case DECIMAL:
            baseType = 10;
            break;
        case BINARY:
            baseType = 2;
            break;
        case HEX:
            baseType = 16;
            break;
        case OCT:
            baseType = 8;
            break;
    }

    int base = stoi(input, nullptr, baseType);
    string result;

    switch (to) {
        case DECIMAL: {
            result = to_string(base);
            break;
        }
        case BINARY: {
            result = nconvert(base, 2);
            break;
        }
        case HEX: {
            std::stringstream stream;
            stream << std::hex << base;

            result = stream.str();
            break;
        }
        case OCT: {
            result = nconvert(base, 8);
            break;
        }

    }

    cout << result << endl;
    return 0;
}