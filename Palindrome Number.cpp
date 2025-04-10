#include <string>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        
        if (x < 0) return false;

        // Convert the number to a string
        string str1 = to_string(x);
        int len = str1.length();
        bool isPalindrome = true;

        // Check if the string is a palindrome
        for (int i = 0; i < len / 2; i++)  
        {
            if (str1[i] != str1[len - i - 1])  
            {
                isPalindrome = false;
                break;
            }
        }

        return isPalindrome;
    }
};
