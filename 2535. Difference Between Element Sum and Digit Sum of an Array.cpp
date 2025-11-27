class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum = 0;
        int dsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            esum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            while (x > 0) {
                dsum += x % 10;
                x /= 10;
            }
        }

        int diff = esum - dsum;
        return diff;
    }
};
