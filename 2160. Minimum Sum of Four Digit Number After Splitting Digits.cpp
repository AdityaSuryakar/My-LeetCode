class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());

        int left = 0, right = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0)
                right = right * 10 + (s[i] - '0');
            else
                left = left * 10 + (s[i] - '0');
        }

        return left + right;
    }
};
