class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zptr = 0; //zero pointer
        int nptr = 0; //non-zero pointer 
        int temp;
       
        for(int i=0;i<nums.size();i++)
        {
            if (nums[nptr] == 0)
            {
                nptr++;
            }
            else if (nums[zptr]!=0)
            {
            zptr++;
            nptr++;
            }
            else
            {
                temp =nums[zptr];
                nums[zptr]=nums[nptr];
                nums[nptr]=temp;
                zptr++;
                nptr++;
            }
          
        }

        

    }
};