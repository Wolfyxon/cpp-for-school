#include <iostream>
#include <vector>
#include <string>

using std::vector, std::string, std::cin, std::cout, std::endl;

typedef struct {
    string name;
    string password;
} User;

void menuLogin();
void menuRegister();
int main();

vector<User> users = {};

User* getUser(string name) {
    for(int i = 0; i < users.size(); i++) {
        User* user = &users[i];

        if(user->name == name) return user;
    }

    return NULL;
}

int main() {
    cout << "Co chcesz zrobić?: " << endl;
    cout << "1. Zaloguj" << endl;
    cout << "2. Zarejestruj" << endl;

    int action = 0;
    cin >> action;

    if(action < 1 || action > 2) {
        cout << "Nieznana akcja" << endl;
        return main();
    }

    if(action == 1) {
        menuLogin();
    } else {
        menuRegister();
    }
}

void menuLogin() {
    string login;
    string password;

    cout << "Login: ";
    cin >> login;

    User* user = getUser(login);

    if(user == NULL) {
        cout << "Użytkownik nie istnieje" << endl;

        main();
        return;
    }

    for(int i = 0; i < 3; i++) {
        cout << "Hasło: ";
        cin >> password;

        if(user->password == password) {
            cout << "Logowanie pomyślne" << endl;

            main();
            return;
        } else {
            cout << "Niepoprawne hasło" << endl;;
        }
    }

    cout << "Za dużo prób" << endl;
    main();
}

void menuRegister() {
    string login;
    string password;
    
    cout << "Login: ";
    cin >> login;
    
    if(getUser(login) != NULL) {
        cout << "Ten urzytkonwik już istnieje";

        main();
        return;
    }

    cout << "Hasło: ";
    cin >> password;

    User user = {
        .name = login,
        .password = password
    };

    users.push_back(user);

    cout << "Rejestracja pomyślna" << endl;
    main();
}
