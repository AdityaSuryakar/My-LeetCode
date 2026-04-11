
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int r = piles.size();
        int count = 0;

        for (int i = 0; i < piles.size() / 3; i++) {
            count += piles[r - 2];
            r -= 2;
        }
        return count;
    }
};
