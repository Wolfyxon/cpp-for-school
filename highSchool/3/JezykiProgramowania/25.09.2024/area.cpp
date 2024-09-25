#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum Operation {
    SQUARE,
    RECT,
    CIRCLE,

    EXIT
};

const double PI = 3.14159;

char* getOperatioName(Operation operation) {
    switch(operation) {
        case Operation::SQUARE: return "Pole kwadratu";
        case Operation::RECT: return "Pole prostokąta";
        case Operation::CIRCLE: return "Pole koła";

        case Operation::EXIT: return "Wyjście";
    };
}

int getOperationsLen() {
    return Operation::EXIT + 1;
}

float getf(char* name) {
    cout << "Podaj " << name << ": ";

    float res = 0;
    cin >> res;

    return res;
}

void menu() {
    for(int i = Operation::SQUARE; i < getOperationsLen(); i++) {
        Operation oper = static_cast<Operation>(i);
        cout << i << ") " << getOperatioName(oper) << endl;
    }

    cout << "Wybierz: ";

    int oper;
    cin >> oper;

    if(oper < 0 || oper > getOperationsLen()) {
        cout << "Nie znana operacja." << endl;
        return menu();
    }

    cout << "Wybrano: " << getOperatioName(static_cast<Operation>(oper)) << endl;

    float area;
    float oblast;

    switch(oper) {
        case Operation::SQUARE: {
            float wall = getf("bok");

            area = wall * wall;
            oblast = wall * 4;
            break;
        }

        case Operation::RECT: {
            float w = getf("szerokość");
            float h = getf("wysokość");

            area = w * h;
            oblast = w * 2 + h * 2;
            break;
        }

        case Operation::CIRCLE: {
            float r = getf("promień");

            area = PI * r * r;
            oblast = 2 * PI * r;
            break;
        }
        
        case Operation::EXIT: {
            cout << "bajo" << endl;
            return;
        }
    }

    cout << "Pole wynosi: " << area << endl;
    cout << "Obwód wynosi: " << oblast << endl;

    cout << endl;
    menu();
}

int main(int argc, char* argv[]) {
    menu();
    return 0;
}
