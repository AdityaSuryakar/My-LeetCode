class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int diff = INT_MAX;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                
                if((nums[i] == 1 && nums[j] == 2) ||
                   (nums[i] == 2 && nums[j] == 1)) {
                    
                    if(abs(i - j) < diff){
                        diff = abs(i - j);
                    }  
                }
            }
        }
        
        if(diff == INT_MAX) return -1;
        return diff;
    }
};
