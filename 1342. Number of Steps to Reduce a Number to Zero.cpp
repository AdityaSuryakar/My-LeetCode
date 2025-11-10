class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num > 0) {
            if (num % 2 == 0) {
                num /= 2;     // divide by 2 if even
            } else {
                num -= 1;     // subtract 1 if odd
            }
            count++;           // increment count for each step
        }
        return count;
    }   
};
