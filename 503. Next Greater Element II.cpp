class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            int nextGreater = -1;

            // check next elements circularly
            for(int j = 1; j < n; j++) {
                int index = (i + j) % n;
                if(nums[index] > nums[i]) {
                    nextGreater = nums[index];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};
