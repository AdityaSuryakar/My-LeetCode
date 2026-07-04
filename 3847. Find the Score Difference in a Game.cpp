class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first = 0, second = 0;
        bool firstActive = true;  // initially first player is active
        
        for(int i = 0; i < nums.size(); i++) {
            
            // Rule 1: swap if odd
            if(nums[i] % 2 != 0) {
                firstActive = !firstActive;
            }
            
            // Rule 2: swap every 6th game (index 5,11,17,...)
            if(i % 6 == 5) {
                firstActive = !firstActive;
            }
            
            // Active player gains points
            if(firstActive) {
                first += nums[i];
            } else {
                second += nums[i];
            }
        }
        
        return first - second;
    }
};
