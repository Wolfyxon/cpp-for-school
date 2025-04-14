#include <stdio.h>

int fibRec(int n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    return fibRec(n - 1) + fibRec(n - 2);
}

int fibIter(int n) {
    int fib = 0;
    int prev = 0;
    int next = 1;

    for(int i = 1; i < n; i++) {
        fib = prev + next;
        
        prev = next;
        next = fib;
    }

    return fib;
}

int main() {
    int n;

    printf("Podaj nr liczby fibonacciego: ");
    scanf("%i", &n);

    printf("%i (rekurencyjnie) \n", fibRec(n));
    printf("%i (iteracyjnie) \n", fibIter(n));
}