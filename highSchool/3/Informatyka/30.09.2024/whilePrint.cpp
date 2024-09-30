#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    
    char ch = '0';

    while(ch <= '`') {
        cout << ch << " ";
        ch++;

        if(ch % 16 == 0) cout << endl;
    }

    return 0;
}