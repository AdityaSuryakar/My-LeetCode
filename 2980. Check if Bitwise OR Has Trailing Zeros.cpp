class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n = nums.size(); 
        int i = 0; 
        while (i < n) {
            int j = 0; 
            while (j < n) {
                if (i != j && (nums[i] | nums[j]) % 2 == 0) {
                    return true; 
                }
                j++; 
            }
            i++; 
        }
        
        return false; // Return false if no such pair is found
    }
};


