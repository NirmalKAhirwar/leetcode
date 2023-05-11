class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int low =0, high = nums.size()-1, count =0;

        while(low<high){
            int sum = nums[low]+nums[high];
            if(sum == k){
                low++;
                high--;
                count++;
            } 
            else if(sum > k) high--;
            else    low++;
        }
        return count;
    }
};