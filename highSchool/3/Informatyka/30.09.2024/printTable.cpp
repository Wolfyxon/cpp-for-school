#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    int min;
    int max;

    cout << "Podaj zakres tablicy znaków:" << endl;

    cout << "Min: ";
    cin >> min;

    cout << "Max: ";
    cin >> max;

    cout << endl;

    for(int i = min; i <= max; i++) {
        char ch = i;
        cout << ch << " ";

        if(i % 16 == 0) cout << endl;
    }

    cout << endl;
    return 0;
}