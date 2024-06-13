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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root)
            return res;
        queue<TreeNode*> q;
        vector<int> lvl;
        q.push(root);
        q.push(NULL);
        while (!q.empty()) {
            TreeNode* tmp = q.front();

            q.pop();
            if (tmp == NULL) {
                res.push_back(lvl);
                lvl.clear();
                if (!q.empty()) {
                    q.push(NULL);
                }
            } else {
                lvl.push_back(tmp->val);
                if (tmp->left) {
                    q.push(tmp->left);
                }
                if (tmp->right) {
                    q.push(tmp->right);
                }
            }
        }
        return res;
    }
};