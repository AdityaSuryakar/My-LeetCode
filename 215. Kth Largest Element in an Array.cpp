class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lar = 0;
        for(int i=0;i<nums.size();i++){
            lar = nums[nums.size() - k];
        }
        return lar;
    }
};
