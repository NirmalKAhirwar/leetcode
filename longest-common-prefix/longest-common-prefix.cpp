class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size() - 1;
        string s1 = strs[0];
        string s2 = strs[n];
        int m = min(s1.length(), s2.length());
        string ans = "";

        for(int i=0; i < m; i++)
        {
            if(s1[i] != s2[i])
            {
                return ans;
            }
            ans = ans + s1[i];
        }

        return ans;

    }
};