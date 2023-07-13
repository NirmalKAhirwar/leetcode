class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // if n appears more than n/2 times than for sure after sorting
        // the mid element would be that element
      sort(nums.begin(),nums.end());
      return nums[nums.size()/2];
    }
};