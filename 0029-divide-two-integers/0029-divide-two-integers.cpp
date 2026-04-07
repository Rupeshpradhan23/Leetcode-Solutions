class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool neg = (dividend < 0) ^ (divisor < 0);

        long long x = llabs((long long)dividend);
        long long y = llabs((long long)divisor);

        long long ans = 0;   // ✅ FIX

        while (x >= y) {
            long long t = y, m = 1;

            while (x >= (t << 1)) {
                t <<= 1;
                m <<= 1;
            }

            x -= t;
            ans += m;
        }

        if (neg) ans = -ans;

        return (int)ans;
    }
};