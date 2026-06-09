class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // Case 1: product of 3 largest numbers
        int prod1 = nums[n-1] * nums[n-2] * nums[n-3];

        // Case 2: product of 2 smallest and the largest
        int prod2 = nums[0] * nums[1] * nums[n-1];

        return max(prod1, prod2);
    }
};
