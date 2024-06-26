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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        vector<int>ans;
        vector<int>left=inorderTraversal(root->left);
        vector<int>right=inorderTraversal(root->right);
        for(int i:left){
            ans.push_back(i);
        }
        ans.push_back(root->val);
        for(int i:right){
            ans.push_back(i);
        }
        
        return ans;
    }
};