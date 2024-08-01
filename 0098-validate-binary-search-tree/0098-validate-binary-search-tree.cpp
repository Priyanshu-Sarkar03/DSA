class Solution {
public:
    // Helper function to perform inorder traversal of the binary tree.
    // The function takes a pointer to the root node and a reference to a vector to store the node values.
    void inorder(TreeNode* root, vector<int>& nodes) {
        // Base case: if the current node is null, return from the function.
        if (!root)
            return;

        // Recursively call the inorder function on the left child.
        inorder(root->left, nodes);
        // Add the value of the current node to the vector.
        nodes.push_back(root->val);
        // Recursively call the inorder function on the right child.
        inorder(root->right, nodes);
    }

    // Function to check if a binary tree is a valid Binary Search Tree (BST).
    bool isValidBST(TreeNode* root) {
        // Base case: if the root is null, the tree is a valid BST.
        if (!root)
            return true;

        // Vector to store the values of nodes in inorder traversal.
        vector<int> nodes;
        // Perform inorder traversal and store the values in the vector.
        inorder(root, nodes);

        // Check if the vector is sorted in strictly increasing order.
        // Traverse the vector and ensure each element is greater than the previous one.
        for (int i = 1; i < nodes.size(); ++i) {
            if (nodes[i] <= nodes[i - 1]) {
                return false;
            }
        }

        // If all elements are in strictly increasing order, return true.
        return true;
    }
};
