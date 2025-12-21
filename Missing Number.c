int missingNumber(int* nums, int numsSize) {
    int totalSum = numsSize * (numsSize + 1) / 2; // Sum of numbers from 0 to numsSize
    int actualSum = 0;

    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return totalSum - actualSum;
}
