class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> freq(nums.size() + 1, 0);
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;

            if (freq[nums[i]] == 2) {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
