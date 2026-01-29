class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long add = 0;
        long long base = 1;

        while (true) {
            long long sum = 0;
            long long temp = n + add;

            // calculate digit sum
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }

            if (sum <= target) {
                return add;
            }

            // current digit at this base
            long long digit = ((n + add) / base) % 10;

            long long inc = (10 - digit) % 10;
            add += inc * base;

            base *= 10;
        }
    }
};
