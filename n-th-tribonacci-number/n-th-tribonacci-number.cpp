class Solution {
public:
    int solve(vector<int> &dp, int n)
    {   
        
        if (n <= 0) return 0;
        if (n == 1 || n == 2) return 1;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        if(dp[n] != 0) return dp[n];

        dp[n] = solve(dp, n-3) + solve(dp, n+1-3) + solve(dp, n+2-3);
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int> dp(n+3);
        
        int ans = solve(dp, n);
        return ans;
    }
};