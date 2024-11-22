#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

enum Action {
    READ,
    WRITE
};

const string ACTION_NAMES[] = {
    "Czytaj plik",
    "Zapisz plik"
};

Action getAction() {
    int actionInp;
    int actionsLen = sizeof(ACTION_NAMES) / sizeof(string);

    for(int i = 0; i < actionsLen; i++) {
        cout << i + 1 << ". " << ACTION_NAMES[i] << endl;
    }

    cout << "Co chcesz zrobić?: ";
    cin >> actionInp;

    Action action = (Action) (actionInp - 1);
    
    if(action < 0 || action >= actionsLen) {
        cout << "Nieznana akcja" << endl;
        return getAction();
    }

    return action;
}

int main(void) {
    Action action = getAction();
    string path;

    cout << "Podaj ścieżkę pliku: ";
    cin >> path;

    switch(action) {
        case Action::READ: {
            std::ifstream file(path);
            break;
        }


        case Action::WRITE: {
            std::ofstream file(path);
            break;
        }
    }

    return 0;
}
