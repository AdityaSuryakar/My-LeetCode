class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncre = true;
        bool isDecre = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]) 
                isIncre = false;
            
            if(nums[i] > nums[i-1]) 
                isDecre = false;
        }

        return isIncre || isDecre;
    }
};
