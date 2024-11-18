#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
    int max_len = 10;
    string strings[max_len];

    for(int i = 0; i < max_len; i++) {
        string inp;
        cin >> inp;

        strings[i] = inp;
    }

    cout << "Trójkąt:" << endl;

    int idx = 0;

    for(int row = 0; row < max_len && idx < max_len; row++) {
        for(int i = 0; i < row; i++) {
            cout << strings[idx] << " ";
            idx++;
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}