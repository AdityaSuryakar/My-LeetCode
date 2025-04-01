#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

long long countFairPairs(int* nums, int numsSize, int lower, int upper) {
    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    long long count = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        int left = i + 1;
        int right = numsSize - 1;

        // Find the first number >= lower - nums[i]
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= lower - nums[i]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        int start = left;

        left = i + 1;
        right = numsSize - 1;

        // Find the last number <= upper - nums[i]
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= upper - nums[i]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        int end = right;
        if (start <= end) {
            count += (end - start + 1);
        }
    }

    return count;
}
