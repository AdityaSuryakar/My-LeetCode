class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        if(num == 0){
            return 0;
        }
        else{
            while (num > 0) {       
                sum += num % 10;
                num /= 10;
            }
        }
        
        if (sum > 9) {               
            return addDigits(sum);
        }

        return sum;
    }
};
