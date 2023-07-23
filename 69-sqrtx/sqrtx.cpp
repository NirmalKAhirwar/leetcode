class Solution {
public:
    int mySqrt(int x) {
        long long n = 0;
        long long int i = 1;

        if (x < 1) return 0;
        if (x == 1) return 1;

        n = i * i;
        while(x >= n)
        {
            i++;
            n = i * i;
        }

        return i-1;

    }
};