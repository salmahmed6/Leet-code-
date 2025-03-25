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
    int maxDiameter = 0; // Variable to store the maximum diameter
    
    // Helper function to calculate height and update diameter
    int height(TreeNode* root) {
        if (root == NULL) return 0; // Base case: height of null node is 0
        
        int leftHeight = height(root->left);   // Height of left subtree
        int rightHeight = height(root->right); // Height of right subtree
        
        // Update the maximum diameter
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        
        // Return height of the current node
        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root); // Calls height function to calculate diameter
        return maxDiameter; // Returns the final diameter
    }
};