/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int** transposed = (int**) malloc(cols * sizeof(int*));
    *returnColumnSizes = (int*) malloc(cols * sizeof(int));
    for (int i = 0; i < cols; i++) 
    {
        transposed[i] = (int*) malloc(rows * sizeof(int));
        (*returnColumnSizes)[i] = rows;  
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    *returnSize = cols;
    return transposed;
}
