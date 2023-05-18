class Solution {
public:
    bool isPowerOfFour(int n) {
        long long int v = 1;
        if (n == 1) return true;
        while(v <= n)
        {
            v = v << 2;
            if(v == n) return true;
        }

        return false;
    }
};