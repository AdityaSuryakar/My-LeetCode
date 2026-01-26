class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_value = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    long long value =
                        (long long)(nums[i] - nums[j]) * nums[k];

                    if (value > max_value) {
                        max_value = value;
                    }
                }
            }
        }
        return max_value;
    }
};
