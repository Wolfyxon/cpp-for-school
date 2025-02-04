#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    printf("Podawaj liczby, lub x by zakończyć \n");

    int len = 0;
    int* nums = malloc(len);

    while (true) {
        char ch = getc(stdin);
        if(ch == *"x") break;

        len++;
        nums = realloc(nums, len * sizeof(int));

        if(nums == NULL) {
            printf("RAM się pali albo system ma skill issue \n");
            return 1;
        }

        nums[len - 1] = atoi(&ch);
    }
    
    bool sorted = false;

    while (!sorted) {
        sorted = true;

        for(int i = 0; i < len - 1; i++) {
            int current = nums[i];
            int next = nums[i + 1];

            if(current > next) {
                sorted = false;

                nums[i] = next;
                nums[i + 1] = current;
            }
        }
    }

    for(int i = 0; i < len; i++) {
        printf("%i ", nums[i]);
    }

    puts("");
}