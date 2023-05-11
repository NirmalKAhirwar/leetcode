class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
         bool in = false, de = false;
        int l = nums.size();
        for(int i = 1; i<l;i++){
            if(nums[i] > nums[i-1]){
                in = true;
            }
            else if(nums[i] < nums[i-1]){
                de = true;
            }
            if(in & de){
                return false;
            }
        }
        return true;
    }
};