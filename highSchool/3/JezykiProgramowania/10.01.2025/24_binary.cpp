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
            break;
        }
        
        default: {
            cout << "Nieznana komenda" << endl;
            break;
        }
    } 
    
}