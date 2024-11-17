#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main(void) {
    string str;
    cin >> str;

    int len = str.length();
    for(int i = 0; i < len; i++) {
        cout << str[len - 1 - i];
    }

    cout << endl;
}