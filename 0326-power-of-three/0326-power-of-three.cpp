class Solution {
public:
    bool isPowerOfThree(int n) {

        if (n <= 0) return false;  // 🔥 IMPORTANT FIX

        long long val = 1;

        while (val <= n) {
            if (val == n) return true;
            val *= 3;
        }

        return false;
    }
};