class Solution {
public:

    bool uglyRecurse(int n) {
        if (n == 1) return true;

        if (n % 5 == 0) return uglyRecurse(n / 5);
        if (n % 3 == 0) return uglyRecurse(n / 3);
        if (n % 2 == 0) return uglyRecurse(n / 2);

        return false;
    }

    bool isUgly(int n) {
        
        if (n < 1) return false;

        if (n == 1) return true;

        return uglyRecurse(n);
    }
};