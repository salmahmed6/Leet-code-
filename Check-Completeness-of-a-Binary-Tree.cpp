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
     bool isCompleteTree(TreeNode* root) {
        if (!root) return true;

        queue<TreeNode*> q;
        q.push(root);
        bool encounteredNull = false;

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node == nullptr) {
                // Mark that we have seen a null node
                encounteredNull = true; 
            } else {
                // If a non-null node appears after null, it's not complete
                if (encounteredNull) return false; 

                q.push(node->left);
                q.push(node->right);
            }
        }
        return true;
    }
};


//approach to solve 
// use a queue
// traverse the tree level by level 
// if we find a null node then all node after it will be null 
// if a non-null node appears after a null the tree is not complete 
// and otherwise!