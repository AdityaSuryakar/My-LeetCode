class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(int i = 0; i < words.size(); i++){     // loop through words
            string s = words[i];
            bool isPal = true;

            for(int j = 0; j < s.size()/2; j++){   // check palindrome
                if(s[j] != s[s.size()-1-j]){
                    isPal = false;
                    break;
                }
            }

            if(isPal){
                return s;
            }
        }
        return "";
    }
};
