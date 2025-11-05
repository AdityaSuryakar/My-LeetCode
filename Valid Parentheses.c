#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isOpenBracket(char c) {
    return (c == '(' || c == '[' || c == '{');
}

bool isMatchPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

bool isValid(char* s) {
    // Allocate stack memory
    int n = strlen(s);
    char* stack = (char*)malloc(sizeof(char) * (n + 1));
    if (!stack) {
        return false; // Memory allocation failure
    }

    int top = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];
        if (isOpenBracket(current)) {
            stack[++top] = current; // Push to stack
        } else {
            if (top == -1 || !isMatchPair(stack[top], current)) {
                free(stack);
                return false; // Mismatched or unbalanced brackets
            }
            top--; // Pop from stack
        }
    }

    bool result = (top == -1); // Stack should be empty
    free(stack); // Free allocated memory
    return result;
}
