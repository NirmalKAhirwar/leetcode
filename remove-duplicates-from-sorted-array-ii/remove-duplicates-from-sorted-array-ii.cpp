class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i = 0;
        // for(int n : nums)
        // {
        //     if(i < 2 || n > nums[i-2])
        //     {
        //         nums[i++] = n;
        //     }
        // }

        // return i;
        if(nums.size() == 1) return 1;
        int j=1;
        for(int i=2;i< nums.size();i++)
            if(nums[i] != nums[j-1])
                nums[++j]=nums[i];
        return j+1;

    }
};