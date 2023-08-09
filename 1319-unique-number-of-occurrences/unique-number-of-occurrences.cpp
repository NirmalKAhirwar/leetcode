class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;

        // if (arr.size() < 3)
        // {
        //     return (arr[0] < arr[1])? false : true;
        // }
        for(auto x : arr)
        {
            m[x]++;
        }

        set<int> s;
        for(auto x : m)
        {
            s.insert(x.second);
        }

        return (s.size() == m.size())? true : false;
    }
};