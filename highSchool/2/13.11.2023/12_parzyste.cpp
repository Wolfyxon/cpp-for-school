#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Sumowanie liczb parzystych (wpisz -50 by zakonczyc)\n";

    vector<int> nums;
    string input;
    while(input != "-50"){
        cin >> input;
        if(input == "-50") break;
        int num = stoi(input);
        if(num % 2 == 0) nums.push_back(num);
    }
    int sum = 0;
    for(size_t i=0;i<nums.size();i++){
        int n = nums[i];
        if(n) sum += n;
    }
    cout << "Suma podanych liczb parzystych: " << sum << "\n";

    system("pause");
    return 0;
}