#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]) {
    
    cout << "Podaj n: ";
    
    int n;
    cin >> n;

    int sum = 0;
    int add = 2;

    for(int i = 1; i <= n; i++) {
        sum += i * 2;
    }

    cout << "Suma " << n << " kolejnych liczb parzystych" << endl;
    cout << "wynosi: " << sum << endl;

    return 0;
}