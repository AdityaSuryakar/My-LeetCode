class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            int curr = nums[i];
            int next = nums[i + 1];

            // Add all missing numbers between curr and next
            for (int x = curr + 1; x < next; x++) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
