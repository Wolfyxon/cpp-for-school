#include <stdio.h>

int pow(int x, int y) {
    if(y == 1) return x;

    return pow(x * x, y - 1);
} 

int main() {
    int x, y;

    printf("Podaj liczbę i potęgę (oddzielone spacjami): ");
    scanf("%i %i", &x, &y);

    printf("Wynik: %i \n", pow(x, y));
}