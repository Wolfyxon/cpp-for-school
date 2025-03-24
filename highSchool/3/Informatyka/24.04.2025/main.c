#include <stdio.h>

const float NOMINALS[] = {20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01};
const int NOMINALS_LEN = sizeof(NOMINALS) / sizeof(float);

int main() {
    float change;

    printf("Podaj resztę: ");
    scanf("%f", &change);

    int i = 0;

    while(change > 0 && i < NOMINALS_LEN) {
        float currentNominal = NOMINALS[i];

        if(change >= currentNominal) {
            printf("%f ", currentNominal);
            change -= currentNominal;
            continue;
        }

        i++;
    }

    puts("");
}