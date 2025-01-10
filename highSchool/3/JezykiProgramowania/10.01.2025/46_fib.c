#include <stdio.h>

int main() {
    int idx;

    printf("Podaj liczbę: ");
    scanf("%i", &idx);

    int prev1 = 0;
    int prev2 = 1;

    int fib = prev1 + prev2;

    for(int i = 3; i <= idx; i++) {
        prev1 = prev2; 
        prev2 = fib;

        fib = prev1 + prev2;
    }

    printf("%i \n", fib);
}