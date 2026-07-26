class Solution {
public:
    int countCommas(int n) {
        while(n > 0){
            if(n < 999){
                return 0;
            }
            else{
                return n - 1000 + 1;
            }
        }
        return -1;
    }
};
