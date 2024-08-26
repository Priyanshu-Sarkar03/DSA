

class Solution {
public:
    // // Function to calculate the maximum depth (or height) of a binary tree
    // int maxDepth(TreeNode* root) {
    //     // If the root is NULL, the tree is empty, so its depth is 0
    //     if (root == nullptr) {
    //         return 0;
    //     }
    //     // Recursively find the depth of the left subtree
    //     int leftDepth = maxDepth(root->left);
    //     // Recursively find the depth of the right subtree
    //     int rightDepth = maxDepth(root->right);
    //     // Return the greater depth between the left and right subtrees, plus 1 for the current node
    //     return max(leftDepth, rightDepth) + 1;
    // }
    
      // Helper function to calculate the diameter of the binary tree
    int calculateDiameter(TreeNode* node, int& diameter) {
        // If the node is NULL, the height is 0
        if (node == nullptr) {
            return 0;
        }
        // Recursively find the depth of the left subtree
        int leftDepth = calculateDiameter(node->left, diameter);
        // Recursively find the depth of the right subtree
        int rightDepth = calculateDiameter(node->right, diameter);
        
        // The diameter passing through this node is the sum of left and right depths
        diameter = max(diameter, leftDepth + rightDepth);
        
        // Return the height of the node, which is the greater depth between left and right subtrees, plus 1 for the current node
        return max(leftDepth, rightDepth) + 1;
    }

    // Function to calculate the diameter of a binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        // Helper function to calculate the diameter
        calculateDiameter(root, diameter);
        // Return the final diameter
        return diameter;
    }
    

  
};
