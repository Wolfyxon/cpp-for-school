#include <stdio.h>

int main() {
    int x, y;

    printf("Podaj liczbę i potęgę (oddzielone spacjami): ");
    scanf("%i %i", &x, &y);

    int n = x;
    
    for(int i = 0; i < y; i++) {
        n *= x;
    }

    printf("%i \n", n);
}