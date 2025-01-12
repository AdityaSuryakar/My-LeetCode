
#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int leftSum = 0, rightSum = 0;
    // Calculate the total sum (rightSum initially).
    for (int i = 0; i < numsSize; i++) {
        rightSum += nums[i];
    }

    // Traverse through the array.
    for (int i = 0; i < numsSize; i++) {
        rightSum -= nums[i]; // Exclude the current element from the right sum.
        if (leftSum == rightSum) {
            return i; // Return the pivot index if condition is met.
        }
        leftSum += nums[i]; // Include the current element in the left sum.
    }

    return -1; // Return -1 if no pivot index is found.
}
