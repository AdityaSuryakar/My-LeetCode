class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int expected = k;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % k != 0) {
                continue;   // skip non-multiples
            }
            if (nums[i] < expected) {
                continue;   // skip duplicates or smaller multiples
            }
            if (nums[i] == expected) {
                expected += k;
            } else { 
                return expected;
            }
        }
        return expected;
    }
};
