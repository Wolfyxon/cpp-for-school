#include <iostream>
#include <vector>

using std::vector, std::cin, std::cout, std::endl;

int main() {
    cout << "Podaj liczby (0 by skończyć):" << endl;

    vector<int> nums;

    while (true) {
        int n;
        cin >> n;

        if(n == 0) break;

        nums.push_back(n);
    }

    bool sorted = true;

    while (sorted) {
        sorted = true;

        for(int i = 0; i < nums.size() - 1; i++) {
            int current = nums[i];
            int next = nums[i + 1];

            if(current < next) {
                sorted = false;

                nums[i] = next;
                nums[i + 1] = current;
            }
        }
    }
    
    

}