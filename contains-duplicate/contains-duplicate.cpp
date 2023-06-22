class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto i: nums)
        {
            s.insert(i);
        }

        return nums.size() == s.size() ? false : true; 
    }
};