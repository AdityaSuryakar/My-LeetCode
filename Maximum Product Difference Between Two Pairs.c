#include <stdio.h>
int maxProductDifference(int* nums, int numsSize) 
{
    int large1=INT_MIN,large2=INT_MIN;
    int small1=INT_MAX,small2=INT_MAX;
    int prod1, prod2;
    for (int i=0; i<numsSize; i++) 
    {
        if (nums[i]>large1) 
        {
            large2=large1;
            large1=nums[i];
        } 
        else if (nums[i]>large2) 
        {
            large2=nums[i];
        }

        if (nums[i] < small1) {
            small2 = small1;
            small1 = nums[i];
        } else if (nums[i] < small2) {
            small2 = nums[i];
        }
    }
    prod1 = large1 * large2;
    prod2 = small1 * small2;
    printf("%d %d %d %d\n", large1, large2, small1, small2);

    int result = prod1 - prod2;
    return result;
}


