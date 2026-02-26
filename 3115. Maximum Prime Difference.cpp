class Solution {
private:
    bool isPrime(int n) {
        if (n <= 1) return false; 
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

public:
    int maximumPrimeDifference(vector<int>& nums) {
        int first = -1;
        int last = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (isPrime(nums[i])) {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        return last - first;
    }
};
