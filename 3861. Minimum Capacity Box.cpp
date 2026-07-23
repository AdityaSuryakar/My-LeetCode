class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minCap = INT_MAX;
        int index = -1;

        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                if(capacity[i] < minCap){
                    minCap = capacity[i];
                    index = i;
                }
            }
        }

        return index;
    }
};
