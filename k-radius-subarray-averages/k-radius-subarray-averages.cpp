class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long int sum = 0;
        int l = 0;
        int r = 0;
        vector<int> ans(nums.size(), -1);
        int dia = 2 * k + 1;
        for(r=0 ; r <= nums.size()-1; r++)
        {
            sum += nums[r];

            if ((r - l+1) == dia) {
                ans[l+k] = floor(sum/dia);
                sum -= nums[l];
                l++;
            }
        }

        return ans;  

    }
};