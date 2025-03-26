#include <stdio.h>
#include <stdlib.h>

const int LEN = 6;

int randRange(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    for(int i = 0; i < LEN; i++) {
        printf("%i", randRange(0, 9));
        
        if(i % 2) {
            printf(" ");
        }
    }

    puts("");
}