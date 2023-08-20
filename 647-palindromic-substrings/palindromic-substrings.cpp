class Solution {
public:
    // int solve(vector<vector<int>> &mem, string s, int i, int j)
    // {
    //     if(i >= j) return 1;

    //     if(mem[i][j] >= 0) return mem[i][j];

    //     return mem[i][j] = (s[i] == s[j])? solve(mem, s, i+1, j-1) : 0;
    // }
    // int countSubstrings(string s) {
    //     vector<vector<int>> mem(s.size(), vector<int>(s.size(), -1));
    //     int c = 0;
    //     int n = s.length();
    //     for(int i=0; i < n; i++ )
    //     {
    //         for(int j=i; j < n; j++)
    //         {
    //             c += solve(mem, s, i, j);
    //         }
    //     }

    //     return c;
    // }
    int countSubstrings(string s) {
        vector<vector<int>> tab(s.size()+1, vector<int>(s.size()+1));
        int count = 0;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            for (int j = i; j < s.size(); ++j)
            {
                if (i == j)
                {
                    tab[i][j] = 1;
                    // cout << s.substr(i, j) << endl;
                }
                else if (i + 1 == j)
                {
                    tab[i][j] = s[i] == s[j] ? 1 : 0;
                    // cout << s.substr(i, j) << endl;
                }
                else
                {
                    tab[i][j] = s[i] == s[j] ? tab[i + 1][j - 1] : 0;
                    // cout << s.substr(i, j) << endl;
                }
                count += tab[i][j];
            }
        }

        return count;
    }
    
};