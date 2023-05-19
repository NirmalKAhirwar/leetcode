class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i=0;
        int j=0;
        int n=matrix.size();
        vector<int> ans;
        while(i<n && j<n){
            if(j!=n-1){
                ans.push_back(matrix[i][j]);
                j++;
            }else if(j==n-1){
                ans.push_back(matrix[i][j]);
                j=0;
                i++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};