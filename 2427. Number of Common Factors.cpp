class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        for(int i = 1 ; i <= a ; i++){
            for(int j = 1 ; j <= b ; j++){
                if(a % i == 0 && b % j == 0){
                    if(i == j)
                        count++;
                }
            }
        }
        return count;
    }
};
