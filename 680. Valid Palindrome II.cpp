class Solution {
public:

    bool check(string &s, int l, int r){
        for(int i = l; i < r; i++){
            if(s[i] != s[r]){
                return false;
            }
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(s[left] != s[right]){
                return check(s, left+1, right) || 
                       check(s, left, right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};
