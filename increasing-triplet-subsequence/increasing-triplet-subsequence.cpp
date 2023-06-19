class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3) return false;

        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for(auto x : nums)
        {
            if(x < min1) min1 = x;

            if(x > min1) min2 = min(x, min2);

            if(x > min2) return true;
        }

        return false;
    }
};