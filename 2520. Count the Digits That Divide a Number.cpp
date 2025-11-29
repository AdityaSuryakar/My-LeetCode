class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int original = num;
        while(num > 0){
            int temp1= num % 10;
            if(original % temp1 == 0){
                count++;
            }
            num = num / 10;
            
        }
        return count;

    }
};
