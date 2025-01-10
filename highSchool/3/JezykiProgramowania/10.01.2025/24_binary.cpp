#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main() {
    cout << "Co chcesz zrobić?" << endl;
    cout << "1. dziesiętny -> binarny" << endl;
    cout << "2. binarny    -> dziesiętny" << endl;

    int mode;
    cin >> mode;

    switch (mode) {
        case 1: {
            int n;
            string bin;

            cout << "Podaj liczbę dziesiętną: " << endl;
            cin >> n;

            while(n > 0) {
                
                int b = n % 2;
                n /= 2;

                bin = std::to_string(b) + bin;
            }

            cout << bin << endl; 
            break;
        }

        case 2: {
            int bin;
            int decimal = 0;

            cout << "Podaj liczbę binarną: ";
            cin >> bin;

            int base = 1;

            while(bin > 0) {
                decimal += (bin % 10) * base;
                bin /= 10;

                base *= 2;
            }

            cout << decimal << endl;
            break;
        }
        
        default: {
            cout << "Nieznana komenda" << endl;
            break;
        }
    } 
    
}