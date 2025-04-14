#include <stdio.h>

int getExpRec(int n) {
    if(n == 0) return 1;

    return 3 * getLayersRec(n - 1);
}

int getExpIter(int folds) {
    int res = 1;

    for(int i = 0; i < folds; i++) {
        res = 3 * res - 1;
    }
}

int main() {
    int folds;

    printf("Podaj n: ");
    scanf("%i", &folds);

    printf("%i (rekurencyjnie) \n", getExpRec(folds));
    printf("%i (iteracyjnie) \n", getExpIter(folds));
}