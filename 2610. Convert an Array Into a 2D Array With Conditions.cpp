class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v={};

        unordered_map<int,int> m;

        for(int i:nums)
        {
            m[i]++;
            if(v.size() < m[i])
            {
                v.push_back({i});
            }
            else
            {
                v[m[i]-1].push_back(i);
            }
        }
        return v;
    }
};
