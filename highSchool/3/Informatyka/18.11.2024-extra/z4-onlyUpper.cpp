#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(void) {
    char* str;
    cin >> str;

    for(int i = 0; i < sizeof(str) / sizeof(char); i++) {
        char ch = str[i];
        
        if(isupper(ch)) {
            cout << ch;
        }
    }

    cout << endl;
    return 0;
}