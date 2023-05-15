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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
       q.push(root);
        if(root==NULL)
            return v;
        
        while(true){
            int size=q.size();
            
            if(size==0)
                break;
         vector<int> res;
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if(temp->left != NULL)
                    q.push(temp->left);
                
                if(temp->right!= NULL)
                    q.push(temp->right);
                
                size--;
            }
       v.push_back(res);
        }
        
     return v;
    }
};