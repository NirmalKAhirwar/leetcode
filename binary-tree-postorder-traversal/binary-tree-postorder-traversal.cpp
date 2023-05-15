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
    void solve(TreeNode* r, vector<int> &ans)
    {
        if(!r) return;

        solve(r->left, ans);
        
        solve(r->right, ans);
        ans.push_back(r->val);
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};