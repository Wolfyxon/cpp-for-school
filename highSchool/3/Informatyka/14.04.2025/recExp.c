#include <stdio.h>

int getExpRec(int n) {
    if(n == 1) return 1;

    return 3 * getExpRec(n - 1);
}

int getExpIter(int n) {
    int res = 1;

    for(int i = 1; i < n; i++) {
        res = 3 * res;
    }
    
    return res;
}

int main() {
    int folds;

    printf("Podaj n: ");
    scanf("%i", &folds);

    printf("%i (rekurencyjnie) \n", getExpRec(folds));
    printf("%i (iteracyjnie) \n", getExpIter(folds));
}