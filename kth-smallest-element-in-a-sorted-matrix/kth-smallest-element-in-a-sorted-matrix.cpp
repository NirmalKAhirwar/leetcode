class Solution {
public:
    // int kthSmallest(vector<vector<int>>& matrix, int k) {
    //     // int i=0;
    //     // int j=0;
    //     // int n=matrix.size();
    //     // vector<int> ans;
    //     // while(i<n && j<n){
    //     //     if(j!=n-1){
    //     //         ans.push_back(matrix[i][j]);
    //     //         j++;
    //     //     }else if(j==n-1){
    //     //         ans.push_back(matrix[i][j]);
    //     //         j=0;
    //     //         i++;
    //     //     }
    //     // }
    //     // sort(ans.begin(),ans.end());
    //     // return ans[k-1];
        

    // }
    int m, n;
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        m = matrix.size(), n = matrix[0].size(); // For general, the matrix need not be a square
        int left = matrix[0][0], right = matrix[m-1][n-1], ans = -1;
        while (left <= right) {
            int mid = (left + right) >> 1;
            if (countLessOrEqual(matrix, mid) >= k) {
                ans = mid;
                right = mid - 1; // try to looking for a smaller value in the left side
            } else left = mid + 1; // try to looking for a bigger value in the right side
        }
        return ans;
    }
    int countLessOrEqual(vector<vector<int>>& matrix, int x) {
        int cnt = 0, c = n - 1; // start with the rightmost column
        for (int r = 0; r < m; ++r) {
            while (c >= 0 && matrix[r][c] > x) --c;  // decrease column until matrix[r][c] <= x
            cnt += (c + 1);
        }
        return cnt;
    }
};