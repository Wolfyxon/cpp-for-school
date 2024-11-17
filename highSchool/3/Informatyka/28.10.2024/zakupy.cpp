#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void) {
    int len = 0;
    int max_len = 20;
    string products[max_len];

    for(int i = 0; i < max_len; i++) {
        string inp;
        cin >> inp;

        if(inp == "***") break;

        bool dup = false;

        for(int ii = 0; ii < i; ii++) {
            string check = products[ii];
            
            if(check == inp) {
                dup = true;
                break;
            }
        }

        if(dup) continue;

        products[i] = inp;
        len++;
    }

    cout << "Lista bez duplikatów:" << endl;

    for(int i = 0; i < len; i++) {
        cout << "- " << products[i] << endl;
    }
}