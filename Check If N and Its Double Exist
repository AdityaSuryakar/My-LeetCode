#include <stdbool.h>
#include <stdlib.h>

bool checkIfExist(int* arr, int arrSize)
{
    int i,j;
    int f=0; 
    for (int i = 0; i < arrSize - 1; i++) 
    {
        for(int j=i+1;j<arrSize;j++)
        {
            if (arr[j]*2 ==arr[i] || arr[i]*2==arr[j])
            {
                return true;
            } 
        }
    }
    return false;
}

