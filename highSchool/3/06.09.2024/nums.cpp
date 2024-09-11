#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

enum Operation {
    ADD,
    SUB,
    MUL,
    DIV,
    POW
};

const int OperationLen = 5;

void printOperation(int i, const char* name) {
    cout << i << ") " << name << endl;
}

int getOperation() {
    printOperation(0, "Dodawanie");
    printOperation(1, "Odejmowanie");
    printOperation(2, "Mnożenie");
    printOperation(3, "Dzielenie");
    printOperation(4, "Potęgowanie");
    
    int oper;

    cout << "Wybierz operację: ";
    cin >> oper;

    if(oper > OperationLen - 1 || oper < 0) {
        cout << "Nieznana operacja. Spróbuj ponownie." << endl;
        return getOperation();
    }

    return oper;
}

int main(int argc, char* argv[]) {
    int amt;
    int oper = getOperation();
    int res = 0;

    cout << "Podaj ilość: ";
    cin >> amt;
    
    for(int i = 0; i < amt; i++) {
        int n;

        cout << "Podaj liczbę nr. " << i + 1 << ": ";
        cin >> n;
        
        switch (oper) {
            case Operation::ADD:
                res += n;
                break;
            
            case Operation::SUB:
                res -= n;
                break;
            
            case Operation::MUL:
                res *= n;
                break;
            
            case Operation::DIV:
                res /= n;
                break;

            case Operation::POW:
                if(i == 0) {
                    res = n;
                    continue;
                }

                res = std::pow(res, n);
                break;
        }
    }

    cout << "Wynik wynosi: " << res << endl;

    return 0;
}