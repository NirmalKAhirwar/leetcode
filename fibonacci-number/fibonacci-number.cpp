class Solution {
public:
    int solve(vector<int> &dp, int n)
    {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        dp[1] = 1;
        dp[2] = 1;
        if(dp[n] != 0) return dp[n];
        
        dp[n] = solve(dp,n-1) + solve(dp,n-2);
        
        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(n+1);
        int ans = solve(dp, n); 
        return ans;
    }

    

};