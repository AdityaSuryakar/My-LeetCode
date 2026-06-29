class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];   
        int subarray = 0;    
        for(int i = 0; i < nums.size(); i++){
            subarray += nums[i];
            if(subarray > ans){
                ans = subarray;
            }
            if(subarray < 0){
                subarray = 0;      // reset if negative
            }
        }
        return ans;
    }
};
