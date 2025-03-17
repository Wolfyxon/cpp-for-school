#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int* nums = malloc(0);
    int len = 0;

    printf("Podawaj liczby, lub x by zakończyć: ");

    while (true) {
        char buf[16];
        scanf("%16s", buf);

        if(strcmp(buf, "x") == 0) {
            break;
        }

        len++;
        nums = realloc(nums, len * sizeof(int));
        nums[len - 1] = atoi(buf);
    }

    for(int i = 0; i < len; i++) {
        int minIdx = i;

        for(int j = i + 1; j < len; j++) {
            if(nums[j] < nums[minIdx]) {
                minIdx = j;
            }
        }

        int a = nums[i];
        int b = nums[minIdx];

        nums[i] = b;
        nums[minIdx] = a;
    }

    for(int i = 0; i < len; i++) {
        printf("%i ", nums[i]);
    }

    puts("");
}