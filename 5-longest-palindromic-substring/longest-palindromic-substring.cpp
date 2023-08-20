class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n));
    int len = 0;

    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; j < n; i++, j++)
        {
            if(g == 0)
            {
                dp[i][j] = 1;
            } else if (g == 1) {
                if(s[i] == s[j])
                {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = 0;
                }
            } else {
                if(s[i] == s[j] && dp[i+1][j-1] == 1)
                {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = 0;
                }
            }

            if(dp[i][j] == 1)
            {
                len = g + 1;
            }
        }
    }

    int max = 0;
    string maxstr = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (dp[i][j] == true && j - i + 1 > max)
            {
                max = j - i + 1;
                maxstr = s.substr(i, j - i + 1);
            }
        }
    }
    // cout <<  maxstr << endl;
    return maxstr;
    }
};