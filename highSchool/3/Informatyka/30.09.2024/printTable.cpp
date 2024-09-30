#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    for(int i = 48; i <= 126; i++) {
        char ch = i;
        cout << ch << " ";

        if(i % 16 == 0) cout << endl;
    }

    cout << endl;
    return 0;
}