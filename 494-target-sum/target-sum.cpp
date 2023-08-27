class Solution {
public:
    int solve(int id,int x, int tar, vector<int> &arr,int n)
      {
          if(id==n)
          {
              if(x==tar)return 1;
              
              return 0;
          }
          
          int l=solve(id+1,x+arr[id],tar,arr,n);
          
          int r= solve(id+1,x-arr[id],tar,arr,n);
          
          return l+r;
          
      }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(0,0,target,nums,n);
    }
};