// // Definition for a binary tree node.
// struct TreeNode {
//     int val;         // Value of the node
//     TreeNode* left;  // Pointer to the left child
//     TreeNode* right; // Pointer to the right child
//     TreeNode() : val(0), left(nullptr), right(nullptr) {} // Default
//     constructor TreeNode(int x)
//         : val(x), left(nullptr), right(nullptr) {} // Constructor with a
//         value
//     TreeNode(int x, TreeNode* left, TreeNode* right)
//         : val(x), left(left), right(right) {
//     } // Constructor with value and children
// };

class Solution {
public:
    int count = 0; // Counter for good nodes

    // Function to traverse the tree and count good nodes
    void traverse(TreeNode* node, int maxSoFar) {
        if (node == nullptr) { // If the node is null, return
            return;
        }

        // If the current node's value is greater than or equal to the maximum
        // value seen so far, it's a good node
        if (node->val >= maxSoFar) {
            count++;              // Increment the good node count
            maxSoFar = node->val; // Update the maximum value seen so far
        }

        // Recursively traverse the left and right subtrees
        traverse(node->left, maxSoFar);  // Traverse the left subtree
        traverse(node->right, maxSoFar); // Traverse the right subtree
    }

    // Function to initialize the traversal and count good nodes
    int goodNodes(TreeNode* root) {
        if (root == nullptr) { // If the root is null, return 0
            return 0;
        }
        traverse(root, root->val); // Start the traversal from the root node
        return count;              // Return the total count of good nodes
    }
};
