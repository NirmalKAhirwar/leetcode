class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int v = 1;
        if (n == 1) return true;
        while(v <= n)
        {
            v = v << 1;
            if(v == n) return true;
        }

        return false;
    }
};