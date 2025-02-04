#include <stdio.h>

#include <stdlib.h>

int main() {
    printf("Podawaj liczby, lub x by zakończyć \n");

    int len = 1;
    int* nums = malloc(len * sizeof(int));

    while (1) {
        char ch = getc(stdin);
        if(ch == *"x") break;

        len++;
        realloc(nums, len * sizeof(int));
        nums[len - 1] = atoi(&ch);
    }
    
}