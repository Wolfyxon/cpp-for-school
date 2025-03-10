#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int len = 0;
    int* nums = malloc(0);

    printf("Podawaj liczby, lub x by zakończyć: \n");

    while(1) {
        char buf[16];
        scanf("%16s", buf);

        if(strcmp(buf, "x") == 0) {
            break;
        }

        len++;
        nums = realloc(nums, len * sizeof(int));

        if(nums == NULL) {
            puts("RAM sie pali");
            return 1;
        }

        nums[len - 1] = atoi(buf);
    }

    for(int i = 0; i < len - 1; i++) {
        if(nums[i] > nums[i + 1]) {
            puts("Lista nie posortowana");
            return;
        }
    }

    puts("Lista posortowana");
}