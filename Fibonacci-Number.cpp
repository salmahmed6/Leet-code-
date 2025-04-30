class Solution {
public:
    int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);

    // int prev1 = 1, prev2 = 0, current;

    // for (int i = 2; i <= n; ++i) {
    //     current = prev1 + prev2;
    //     prev2 = prev1;
    //     prev1 = current;
    // }

    // return current;
    }
};