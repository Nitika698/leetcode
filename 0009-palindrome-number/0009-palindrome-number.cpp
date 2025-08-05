class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 

        long long revnum = 0;
        int dup = x;

        while (x != 0) {
            int digit = x % 10;

            revnum = revnum * 10 + digit;
            x = x / 10;
        }

        if (revnum < INT_MIN || revnum > INT_MAX) {
            return 0;
        }

        return revnum == dup;
    }
};
