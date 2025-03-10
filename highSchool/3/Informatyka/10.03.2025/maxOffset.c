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
        nums[len - 1] = atoi(buf);
    }

    int idx1;
    int idx2;
    int maxOffset;

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            int offset = abs(nums[i] - nums[j]);

            if((i == 0 && j == 0) || maxOffset < offset) {
                idx1 = i;
                idx2 = j;
                maxOffset = offset;
            }
        }
    }

    printf("Największą różnice mają liczby: %i i %i (%i) \n", nums[idx1], nums[idx2], maxOffset);
}