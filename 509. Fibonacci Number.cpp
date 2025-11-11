class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;  // base case
        if (n == 1) return 1;  // base case

        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;  // next Fibonacci number
            a = b;      // move forward
            b = c;
        }
        return b;
    }
};
