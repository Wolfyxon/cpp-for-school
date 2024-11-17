#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::map;

int main(void) {
    map<string, int> strings;

    while(true) {
        string inp;
        cin >> inp;

        if(inp == "***") break;

        if(strings.count(inp)) {
            strings[inp]++;
        } else {
            strings[inp] = 0;
        }
    }

    cout << "Liczba powtórzeń każdego wyrazu:" << endl;

    for(const auto entry : strings) {
        cout << entry.first << ": " << entry.second << endl;
    }

}