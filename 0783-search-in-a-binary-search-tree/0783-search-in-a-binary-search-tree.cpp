class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int data) {
        if(root==NULL){
            return NULL;
        }
        if(root->val == data){
            return root;
        }
        if(data<root->val){
            return searchBST(root->left,data);
        }
        if(data>root->val){
            return searchBST(root->right,data);
        }
        return NULL;
    }
};