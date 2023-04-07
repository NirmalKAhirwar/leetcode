class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;               
        for(int itr = 0; itr < nums.size(); itr++){
            int remainingNum = target - nums[itr];
            if(mp[remainingNum]) return {mp[remainingNum]-1, itr};
            else mp[nums[itr]] = itr+1;
        } 

        return {};
    }
};