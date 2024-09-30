#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    
    int min = std::numeric_limits<int>::max();
    int i = 0;
    int current;

    cout << "(Wpisanie 0 zatrzyma program)" << endl;

    while(true) {
        i++;

        cout << "Podaj  " << i << " liczbę: ";
        cin >> current;

        if(current == 0) break;

        if(current < min) {
            min = current;
        }
    }

    cout << endl << "Najmniejsza wartość: " << min << endl;
    
    return 0;
}