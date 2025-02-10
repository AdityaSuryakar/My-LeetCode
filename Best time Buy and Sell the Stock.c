#include <stdio.h>

void reverseString(char* s, int sSize) {
    int i = 0;
    int j = sSize - 1; // Correctly set the index of the last character.
    char temp;         // Declare temp for swapping.

    // Loop until the pointers meet or cross each other.
    while (i < j) {
        temp = s[i];   // Swap characters at positions i and j.
        s[i] = s[j];
        s[j] = temp;
        i++;           // Move the left pointer to the right.
        j--;           // Move the right pointer to the left.
    }
}
