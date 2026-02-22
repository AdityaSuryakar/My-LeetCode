class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int total_count = candyType.size();
        int distinct = 0;
        sort(candyType.begin(), candyType.end());
        for (int i = 0; i < total_count; i++) {
            if (i == 0 || candyType[i] != candyType[i - 1]) {
                distinct++;
            }
        }
        if (distinct > total_count / 2)
            return total_count / 2;
        else
            return distinct;
    }
};


