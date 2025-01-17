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
     bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: both nodes are null
        if (!p && !q) return true;
        // If one node is null and the other isn't, trees aren't the same
        if (!p || !q) return false;
        // If values differ, trees aren't the same
        if (p->val != q->val) return false;
        // Recursively check left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right,q->right);
    }
};