class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int l = 0, w = 0;
        
        // loop from sqrt(area) down to 1
        for (int i = sqrt(area); i >= 1; i--) {
            if (area % i == 0) {   // found a valid width
                w = i;
                l = area / i;      // compute corresponding length
                break;             // first valid pair gives minimum difference
            }
        }
        
        ans.push_back(l);
        ans.push_back(w);
        return ans;
    }
};
