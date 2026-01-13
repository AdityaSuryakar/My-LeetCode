
class Solution {
   public:
    int alternateDigitSum(int n) {
       if (n == 1 || n == 0)
           return n;
       int sumOdd = 0;
       int sumEven = 0;
       int count = 0;
       while (n != 0) {

           if (count % 2 == 0) {
               sumOdd += n % 10;
           } else {
               sumEven += n % 10;
           }
           n /= 10;
           count++;

       }

       if (count % 2 == 0) {
           return sumEven - sumOdd;
       } else {
           return sumOdd - sumEven;
       }

   }
};
