/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    vector<int> rightSideView(TreeNode* root) {
        // if (root == nullptr) {
        //     // ans.push_back(root->val);
        //     // return ans;
        //     return ans;
        // }
        // ans.push_back(root->val);
        // rightSideView(root->right);
        // if(root->right==nullptr){
        //     rightSideView(root->left);
        // }
        helper(root,0);
        return ans;
    }
    void helper(TreeNode* root,int lvl){
      if(root==NULL)
      return;
      if(lvl==ans.size()){
        ans.push_back(root->val);
      }
      helper(root->right,lvl+1);
     // if(root->right==NULL)
      helper(root->left,lvl+1);
    }
};