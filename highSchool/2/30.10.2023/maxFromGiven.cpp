#ifndef SIGNATURE
   #define SIGNATURE ""
#endif

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
int main(int argc, char *argv[]){
    cout << SIGNATURE "\n";
    cout << "Wybieranie najwiekszej liczby\n";

    float nums[3];
    for(int i=0;i<3;i++){
        cout << "Podaj " << i+1 << " liczbe: ";
        cin >> nums[i];
    }

    cout << "Najwieksza liczba: " << *max_element(nums,nums + sizeof(nums) / sizeof(nums[0]));
    system("pause");
    return 0;
}