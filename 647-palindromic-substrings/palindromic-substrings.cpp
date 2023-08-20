class Solution {
public:
    int solve(vector<vector<int>> &mem, string s, int i, int j)
    {
        if(i >= j) return 1;

        if(mem[i][j] >= 0) return mem[i][j];

        return mem[i][j] = (s[i] == s[j])? solve(mem, s, i+1, j-1) : 0;
    }
    int countSubstrings(string s) {
        vector<vector<int>> mem(s.size(), vector<int>(s.size(), -1));
        int c = 0;
        int n = s.length();
        for(int i=0; i < n; i++ )
        {
            for(int j=i; j < n; j++)
            {
                c += solve(mem, s, i, j);
            }
        }

        return c;
    }
};