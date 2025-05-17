#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2; 
    int* result = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if((nums[i] + nums[j]) == target) {
                result[0] = i;
                result[1] = j;
                return result; 
            }
        }
    }
    
    return NULL; 
}

int main() {
    int numsSize = 4;
    int returnSize = 0;
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int *returnResult = (int*)malloc(returnSize * sizeof(int));

    returnResult = twoSum(nums, numsSize, target, &returnSize);

    if (returnResult != NULL) {
        for (int i = 0; i < returnSize; i++) {
            printf("[%d]", returnResult[i]);
        }
    } else {
        printf("No Two Numbers Sum Up To The Target.\n");
    }

    printf("\n");

    free(returnResult);

    return 0; 
}