class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;  // base cases

        long long low = 1, high = x, ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;  // avoid overflow
            long long sq = mid * mid;

            if (sq == x) return mid;       // perfect square
            else if (sq < x) {
                ans = mid;                 // possible answer
                low = mid + 1;             // search right side
            } else {
                high = mid - 1;            // search left side
            }
        }
        return ans; // floor(sqrt(x))
    }
};
