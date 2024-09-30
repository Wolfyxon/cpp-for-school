#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void print(char begin, char end) {
    int diff = end - begin;
    
    if(diff > 0) {       
        for(char c = begin; c <= end; c += 1) {
            cout << c << " ";
        }
    } else {
        for(char c = begin; c >= end; c -= 1) {
            cout << c << " ";
        }
    }

    cout << endl;
}

int main(int argc, char* argv[]) {
    print('A', 'M');
    print('Z', 'N');

    return 0;
}