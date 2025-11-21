#include <stdbool.h>
#include <stdlib.h>
int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}
bool containsDuplicate(int* nums, int numsSize) 
{
    if (numsSize <= 1) 
    {
        return false;
    }

    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    // Check for duplicates
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] == nums[i - 1]) 
        {
            return true;
        }
    }

    return false;
}
