#include <stdio.h>
#include <math.h>

int main() {
    int nums[3];

    printf("Podaj 3 liczby (oddzielone spacjami): ");
    scanf("%i %i %i", &nums[0], &nums[1], &nums[2]);

    int greatestIdx = 0;

    int powSum = 0;

    for(int i = 0; i < 3; i++) {
        int n = nums[i];

        if(n > nums[greatestIdx]) {
            nums[greatestIdx] = n;
        }
    }

    for(int i = 0; i < 3; i++) {
        if(i != greatestIdx) {
            powSum += pow(nums[i], 2);
        }
    }

    if(pow(nums[greatestIdx], 2) == powSum) {
        puts("Stanowią trójkę");
    } else {
        puts("Nie staniowią trójki");
    }
}