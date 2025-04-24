int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));  // Allocate memory correctly
    int evenIndex = 0, oddIndex = numsSize - 1;          // Two pointers approach

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            result[evenIndex++] = nums[i];  // Place even numbers at the beginning
        } else {
            result[oddIndex--] = nums[i];   // Place odd numbers at the end
        }
    }

    *returnSize = numsSize;  // Update return size
    return result;
}
