class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int small = nums[0];
        int lar = nums[nums.size() - 1];
        int ans = 1;

        for (int i = 1; i <= small; i++) {
            if (small % i == 0 && lar % i == 0) {
                ans = i;
            }
        }
        return ans;
    }
};
