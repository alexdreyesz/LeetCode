#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if((nums[i] + nums[j]) == target) {
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
}

int main () {
    int numsSize = 4;
    int ResultSize = 2;
    int *nums = (int*)malloc(numsSize * sizeof(int));
    nums[0] = 3;
    nums[1] = 2;
    nums[2] = 4;
    nums[3] = 15;
    int target = 9;
    int *returnSize = (int*)malloc(ResultSize * sizeof(int));

    returnSize = twoSum(nums, numsSize, target, returnSize);

    for (int i = 0; i < ResultSize; i++) {
        printf("[%d],", returnSize[i]);
    }
    
    return 0; 
}