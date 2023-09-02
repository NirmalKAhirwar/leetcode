class Solution {
public:

    int solve(string &s, unordered_map<string, int> &mp, vector<int>&dp, int index)
    {
        if(index >= s.size()) return 0;
        if (dp[index] != -1) return dp[index]; //use the stored results

        string currStr = "";
        int minExtra = s.size();

        for(int i = index; i < s.size(); i++)
        {
            currStr.push_back(s[i]);
            int currExtra = (mp.count(currStr))? 0 : currStr.size();
            int nextExtra = solve(s, mp, dp, i+1);
            int totalExtra = currExtra + nextExtra;

            minExtra = min(minExtra, totalExtra);
        }

        return dp[index] = minExtra;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string, int>mp;
        vector<int>dp(s.size(), -1);
        for (string& word : dictionary) mp[word]++;
        
        int ans = solve(s, mp, dp, 0);
        return ans;
    }
};