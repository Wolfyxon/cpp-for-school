
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    
    cout << "Podaj liczbę: ";

    unsigned int n;
    cin >> n;

    cout << "Podaj ilość wieloktrotności: ";

    int amt;
    cin >> amt;
    
    for(int i = 1; i < amt; i++) {
        cout << n * i << ", ";
    }

    cout << endl;
    return 0;
}