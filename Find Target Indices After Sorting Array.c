
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            count++;
        }
    }

    // Allocate memory for result array
    int* result = (int*)malloc(count * sizeof(int));
    if (!result) { // Check if malloc failed
        *returnSize = 0;
        return NULL;
    }

    // Store indices of the target value
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            result[index++] = i;
        }
    }

    // Return the size of the result array
    *returnSize = count;
    return result;
}
