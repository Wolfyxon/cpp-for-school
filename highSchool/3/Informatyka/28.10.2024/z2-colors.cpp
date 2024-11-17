#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main(void) {
    int len = 10;
    string longest = "";

    for(int i = 0; i < len; i++) {
        string inp;
        cin >> inp;

        if(inp.length() >= longest.length()) {
            longest = inp;
        }
    }

    cout << "Najdłuższy: " << longest << endl;
}