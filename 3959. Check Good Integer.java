class Solution {
    public boolean checkGoodInteger(int n) {

        int digitSum   = digitSum(n);
        int squareSum  = squareSum(n);
        return (squareSum - digitSum) >= 50;
    }

    public int digitSum(int n){
        if(n == 0)return 0;
        return (n%10) + digitSum(n/10);
    }

    public int squareSum(int n){
        if (n == 0) return 0;
        return (n % 10) * (n % 10) + squareSum(n / 10);
    }
}
