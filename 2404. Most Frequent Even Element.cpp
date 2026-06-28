class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> even_arr;
        
        // Collect even numbers
        for(int num : nums){
            if(num % 2 == 0){
                even_arr.push_back(num);
            }
        }
        
        if(even_arr.size() == 0) return -1;
        
        sort(even_arr.begin(), even_arr.end());
        
        int maxFreq = 1;
        int currFreq = 1;
        int answer = even_arr[0];
        
        for(int i = 1; i < even_arr.size(); i++){
            if(even_arr[i] == even_arr[i-1]){
                currFreq++;
            } else {
                currFreq = 1;
            }
            
            if(currFreq > maxFreq){
                maxFreq = currFreq;
                answer = even_arr[i];
            }
        }
        
        return answer;
    }
};
