#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    
    cout << "Podaj n: ";
    
    int n;
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    cout << "Suma " << n << " kolejnych liczb nieparzystych" << endl;
    cout << "wynosi: " << sum << endl;

    return 0;
}