class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int mx = 0;

        // find maximum candies
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > mx) {
                mx = candies[i];
            }
        }

        // check each kid
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= mx) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
