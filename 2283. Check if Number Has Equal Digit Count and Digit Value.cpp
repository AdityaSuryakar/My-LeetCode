class Solution {
public:
    bool digitCount(string num) {
        int freq[10] = {0};  // array to store frequency of digits 0–9

        // Count how many times each digit appears in the string
        for (int i = 0; i < num.size(); i++) {
            char c = num[i];          // get character at index i
            freq[c - '0']++;          // convert char to int and increase its count
        }

        // Check if the digit at each index i matches freq[i]
        for (int i = 0; i < num.size(); i++) {
            int expected = num[i] - '0';   // digit written at index i
            if (freq[i] != expected) {     // compare with actual count
                return false;              // mismatch → not valid
            }
        }

        return true;   // all positions matched
    }
};
