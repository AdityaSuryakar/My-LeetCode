/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int* shuffle(int* nums, int numsSize, int n, int* returnSize) 
{
    int* shuffled = (int*)malloc(sizeof(int) * numsSize);
    if (!shuffled) 
    {
        *returnSize = 0;
        return NULL; 
    }
    for (int i = 0; i < n; i++) 
    {
        shuffled[2 * i] = nums[i];        
        shuffled[2 * i + 1] = nums[i + n];
    }
    *returnSize = numsSize; 
    return shuffled;        
}
