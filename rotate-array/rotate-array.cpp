class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int temp1, temp2;
        // int n = nums.size();

       
        // for(int i = 0; i < n-k; i++)
        // {
        //     temp1 = nums[i];
        //     nums[i] = temp1;
        //     nums[n-i-1] = temp;
        //     k--;
        // }
        int n=nums.size();
        vector<int> temp(nums.size());
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }
};