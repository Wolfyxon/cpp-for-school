#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

const size_t npos = string::npos;

const string INF_OK = "Hasło wysane na adres: ";
const string INF_ERR_NO_MATCH = "E-maile są różne";
const string INF_ERR_INVALID = "E-mail nie jest prawidłowy";
const string INF_TOO_MUCH_ATTEMPTS = "Za dużo prób";

int emailAttemptsLeft = 5;

void processEmailAttempts() {
    emailAttemptsLeft -= 1;

    if(emailAttemptsLeft <= 0) {
        cout << INF_TOO_MUCH_ATTEMPTS << endl;
        exit(1);
    }
}

bool isEmailValid(string email) {
    string at = "@";
    string dot = ".";

    int atPosL = email.find(at);
    int atPosR = email.rfind(at);
    
    int dotPosL = email.find(dot);
    int dotPosR = email.rfind(dot);
    
    return (
        atPosL != npos && atPosR != npos  &&
        atPosL == atPosR &&
        dotPosL != npos && dotPosR != npos
    );
}

string input(string query) {
    cout << query << ": ";
    
    string res;
    cin >> res;

    return res;
}

string inputEmail(string query) {
    string email = input(query);
    
    if(!isEmailValid(email)) {
        cout << INF_ERR_INVALID << endl;
        processEmailAttempts();

        return inputEmail(query);
    }

    return email;
}

string askForEmails() {
    string email1 = inputEmail("Podaj email");
    string email2 = inputEmail("Powtórz email");

    if(email1 != email2) {
        cout << INF_ERR_NO_MATCH << endl;
        processEmailAttempts();

        return askForEmails();
    }

    return email1;
}

int main(int argc, char* argv[]) {

    string imie = input("Podaj imię");
    string nazwisko = input("Podaj nazwisko");
    string email = askForEmails();

    cout << INF_OK << email << endl;

    return 0;
}