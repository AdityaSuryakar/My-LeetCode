class Solution {
    public int[] concatWithReverse(int[] nums) {
        int n = nums.length;
        int[] ans = new int[2 * n];

        int j = 2 * n - 1;

        for (int i = 0; i < n; i++, j--) {
            ans[i] = nums[i];
            ans[j] = nums[i];
        }

        return ans;
    }
}
