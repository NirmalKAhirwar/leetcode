class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int sp = 0;
        int ep = nums.size()-1;
        vector<int> ans{-1,-1};
        while(sp <= ep)
        {
            int mid = (sp + ep)/2;

            if(nums[mid] == target)
            {
                ans[0]= mid;
                ep = mid - 1;
            }

            else if (nums[mid] > target)
            {
                ep = mid - 1;
            }
            else if (nums[mid] < target) {
                sp = mid + 1;
            }

        }

        sp = 0;
        ep = nums.size()-1;
        while(sp <= ep)
        {
            int mid = (sp + ep)/2;

            if(nums[mid] == target)
            {
                ans[1]= mid;
                sp = mid + 1;
            }

            else if (nums[mid] > target)
            {
                ep = mid - 1;
            }
            else if (nums[mid] < target) {
                sp = mid + 1;
            }

        }

        return ans;
    }
};