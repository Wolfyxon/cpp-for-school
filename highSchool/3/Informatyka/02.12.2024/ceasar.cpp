#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
    string msg;
    int key;

    cout << "Podaj wiadomość: ";
    cin >> msg;

    cout << "Podaj kklucz: ";
    cin >> key;

    for(int i = 0; i < msg.length(); i++) {
        char ch = msg[i] + key;
        cout << ch;
    }

    cout << endl;
    return 0;
}