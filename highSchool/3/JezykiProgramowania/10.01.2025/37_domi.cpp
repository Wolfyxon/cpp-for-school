#include <iostream>
#include <map>

using std::map, std::cout, std::cin, std::endl;

int main() {
    cout << "Podawaj liczby lub 0 by zakończyć" << endl;

    map<int, int> nums;

    while (true) {
        int inp;
        cin >> inp;

        if(inp == 0) break;

        nums[inp]++;
    }
    
    int greatestKey;

    for(auto entry : nums) {
        if(entry.second > nums[greatestKey]) {
            greatestKey = entry.first;
        }
    }

    cout << "Najwięcej głosów na: " << greatestKey << " (" << nums[greatestKey] << ")" << endl;
}
