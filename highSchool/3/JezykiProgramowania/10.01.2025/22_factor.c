#include <stdio.h>

int main() {
    int num;
    int divisor = 2;

    printf("Podaj liczbę: ");
    scanf("%i", &num);

    while (num > 1) {
        if(num % divisor != 0) {
            divisor++;
        } else {
            printf("%i | %i \n", num, divisor);
            num /= divisor;
        }
    }

    printf("%i \n", num);
}