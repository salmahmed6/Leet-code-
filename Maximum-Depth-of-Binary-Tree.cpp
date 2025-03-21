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
    int maxDepth(TreeNode* root) {
        // Base Case: If the tree is empty, depth is 0
        if (root == nullptr) return 0;

        // Recursive Case: Compute max depth of left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        // Return max depth + 1 (for the root node)
        return 1 + max(leftDepth, rightDepth);
    }
};

//approach to solve:
// base case if the root is nullptr return 0
// for recursive case 
//      Recursively calculate the depth of the left subtree and right subtree
//      Take the maximum of both and add 1 for the current root node