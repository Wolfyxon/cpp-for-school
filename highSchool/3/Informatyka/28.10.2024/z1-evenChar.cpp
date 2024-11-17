#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main(void) {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(i % 2 == 0) {
            cout << str[i] << " ";
        }
    }

    cout << endl;
}