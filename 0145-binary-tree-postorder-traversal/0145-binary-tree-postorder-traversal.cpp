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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr){
            return {};
        }
        vector<int>ans;
        vector<int>left=postorderTraversal(root->left);
        vector<int>right=postorderTraversal(root->right);
        for(int i:left){
            ans.push_back(i);
        }
        for(int i:right){
            ans.push_back(i);
        }
        ans.push_back(root->val);
        return ans;
    }
};