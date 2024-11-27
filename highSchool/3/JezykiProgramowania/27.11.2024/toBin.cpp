#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::string;

enum System {
    DECIMAL,
    BINARY
};

const string SYSTEM_NAMES[] = {
    "Dziesietny",
    "Binarny"
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
    }

    int base = stoi(input, nullptr, baseType);

    return 0;
}