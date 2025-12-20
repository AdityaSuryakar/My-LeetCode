#include <stdio.h>
#include <stdlib.h>

int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) 
{
    int i, j;
    int n = imageSize;
    int m = imageColSize[0];

    // Allocate memory for returnColumnSizes
    *returnColumnSizes = (int*)malloc(sizeof(int) * n);
    *returnSize = n;

    // Fill returnColumnSizes
    for (i = 0; i < n; i++) {
        (*returnColumnSizes)[i] = m;
    }

    // Flip and invert the image
    for (i = 0; i < n; i++) {
        int left = 0;
        int right = m - 1;

        while (left <= right) {
            // Flip and invert in one step
            int temp = image[i][left];
            image[i][left] = 1 - image[i][right];
            image[i][right] = 1 - temp;

            left++;
            right--;
        }
    }

    return image;
}
