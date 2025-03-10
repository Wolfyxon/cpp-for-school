#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int len = 0;
    int* nums = malloc(0);

    printf("Podawaj liczby, lub x by zakończyć: \n");

    while(1) {
        char buf[16];
        scanf("%s", buf);

        if(strcmp(buf, "x") == 0) {
            break;
        }

        nums = realloc(nums, len++);

        if(nums == NULL) {
            puts("RAM sie pali");
            return 1;
        }

        nums[len - 1] = atoi(buf);
    }

    for(int i = 1; i < len; i++) {
        int j = i - 1;
        
        while(j >= 0 && nums[i] < nums[j]) {
            nums[i + 1] = nums[j];
            j--;
        }

        nums[j + 1] = nums[i];
    }

    for(int i = 0; i < len; i++) {
        printf("%i ", nums[i]);
    }

    puts("");
}