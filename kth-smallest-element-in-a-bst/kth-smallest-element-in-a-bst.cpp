/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* &r, vector<int> &ans)
    {
        if(r == NULL) return;
        solve(r->left,ans);
        ans.push_back(r->val);
        solve(r->right,ans);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        if (root == NULL) return 0;
        vector<int> ans;
        solve(root, ans);
        return ans[k-1];

    }
};