#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const string TEXT = "Ala albo Ada";

int main(void) {
    string input;

    cout << "Podaj tekst: ";
    cin >> input;
 
    size_t pos = TEXT.find(input);
    
    if(pos == string::npos) {
        cout << "Nie znaleziono";
    } else {
        cout << "Znaleziono na pozycji: " <<  pos;
    }

    cout << endl;
}