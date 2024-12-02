#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int A_IDX = 'a';
const int LETTERS = 26;

int wrap(int size, int idx) {
    return ((size % idx) + idx) % idx;
}

int main(void) {
    string msg;
    int key;

    cout << "Podaj wiadomość: ";
    cin >> msg;

    cout << "Podaj kklucz: ";
    cin >> key;

    for(int i = 0; i < msg.length(); i++) {
        char ch = A_IDX + wrap(msg[i] - A_IDX + key, LETTERS);
        cout << ch;
    }

    cout << endl;
    return 0;
}