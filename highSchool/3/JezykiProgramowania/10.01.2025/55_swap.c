#include <stdio.h>

void swap(int* aPtr, int* bPtr) {
    int a = *aPtr;
    int b = *bPtr;

    *aPtr = b;
    *bPtr = a;
}

int main() {
    int a, b;

    printf("Podaj 2 liczby (oddzielone spacjami): ");
    scanf("%i %i", &a, &b);

    swap(&a, &b);
    printf("%i %i \n", a, b);
}