class Solution {
public:
    // Helper function to perform inorder traversal of the binary tree.
    // The function takes a pointer to the root node and a reference to a queue to store the node values.
    void inorder(TreeNode* root, queue<int>& s) {
        // Base case: if the current node is null, return from the function.
        if (root == NULL)
            return;
        
        // Recursively call the inorder function on the left child.
        inorder(root->left, s);
        // Add the value of the current node to the queue.
        s.push(root->val);
        // Recursively call the inorder function on the right child.
        inorder(root->right, s);
    }

    // Function to find the k-th smallest element in a BST.
    int kthSmallest(TreeNode* root, int k) {
        // Queue to store the values of nodes in inorder traversal.
        queue<int> s;
        // Perform inorder traversal and store the values in the queue.
        inorder(root, s);
        
        // Remove the first (k-1) elements from the queue to get to the k-th element.
        for (int i = 1; i < k; i++) {
            s.pop();
        }
        
        // The front element of the queue is the k-th smallest element.
        return s.front();
    }
};
