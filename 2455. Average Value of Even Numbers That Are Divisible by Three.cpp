class Solution {
public:
    int averageValue(vector<int>& nums) {
        int eventhree = 0;
        int count = 0;
        int avg = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 3 == 0){
                if(nums[i] % 2 == 0){
                    eventhree += nums[i];
                    count++; 
                    avg = eventhree / count;
                }
            }
            
        }
        return avg;
    }
};
