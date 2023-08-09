class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if (n == 0) return tasks.size();

        unordered_map<char,int>mp;
        int count = 0;
        for(auto e : tasks)
        {
            mp[e]++;
            count = max(count, mp[e]);
        }
        
        int ans = (count-1)*(n+1);
        for(auto e : mp) if(e.second == count) ans++;
        return max((int)tasks.size(), ans);

    }
};