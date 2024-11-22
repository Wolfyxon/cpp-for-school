#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

enum Action {
    READ,
    WRITE,
    QUIT
};

const string ACTION_NAMES[] = {
    "Czytaj plik",
    "Zapisz plik",
    "Wyjdź"
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

            if(!file.is_open()) {
                cout << "Nie można otworzyć pliku. Na pewno istnieje?" << endl;
                return main();
            }

            string buf;
            while (std::getline(file, buf)) {
                cout << buf;
            }

            break;
        }

        case Action::WRITE: {
            std::ofstream file(path);

            if(!file.is_open()) {
                cout << "Nie można stworzyć pliku" << endl;
                return main();
            }

            string content;

            cout << "Podaj zawartość pliku:" << endl;
            cin >> content;

            file << content << endl;
            file.close();

            cout << "Plik zapisany" << endl;
            break;
        }

        case Action::QUIT: {
            cout << "Bajo jajo" << endl;
            return 0;
        }
    }

    return 0;
}
