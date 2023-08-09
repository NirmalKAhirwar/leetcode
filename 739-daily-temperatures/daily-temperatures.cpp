class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        int n = temperatures.size();
        vector<int> nge(n, 0);

        for(int i=n-1; i >= 0; i--)
        {
            while(!s.empty() && temperatures[s.top()] <= temperatures[i])
                s.pop();
            
            if(!s.empty())
                nge[i] = s.top() - i;
            
            s.push(i);
        }

        return nge;
        
    }
};