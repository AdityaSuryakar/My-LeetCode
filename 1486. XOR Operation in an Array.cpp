class Solution {
public:
    int xorOperation(int n, int start) {
        int b = 0;;
        for(int i = 0 ; i <n ; i++){
            int current = start + 2 * i;
            b ^= current;
        }
        return  b;
        
    }
};
