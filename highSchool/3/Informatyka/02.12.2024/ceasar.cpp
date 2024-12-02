#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

enum Mode {
    ENCRYPT,
    DECRYPT
};

const int A_IDX = 'a';
const int LETTERS = 26;

int wrap(int size, int idx) {
    return ((size % idx) + idx) % idx;
}

int main(void) {
    string msg;
    int key;
    int mode;

    cout << "Podaj wiadomość: ";
    cin >> msg;

    cout << "Podaj klucz: ";
    cin >> key;

    cout << "1. Zaszyfruj" << endl;
    cout << "2. Odszyfruj" << endl;
    cout << "Co chcesz zrobić?: ";

    cin >> mode;

    if(mode + 1 == DECRYPT) key *= -1;

    for(int i = 0; i < msg.length(); i++) {
        if(msg[i] == ' ') {
            cout << msg[i];
            continue;
        }

        char ch = A_IDX + wrap(msg[i] - A_IDX + key, LETTERS);
        cout << ch;
    }

    cout << endl;
    return 0;
}