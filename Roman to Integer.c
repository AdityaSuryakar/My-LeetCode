#include <string.h>
int romanValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; 
    }
}


int romanToInt(char *roman) {
    int result = 0;
    int length = strlen(roman);

    for (int i = 0; i < length; i++) {
        int current = romanValue(roman[i]);
        int next = (i + 1 < length) ? romanValue(roman[i + 1]) : 0;

        if (current < next) {
            result -= current; 
        } else {
            result += current; 
        }
    }

    return result;
}
