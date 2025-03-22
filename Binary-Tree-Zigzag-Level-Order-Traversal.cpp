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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;  // return empty list if root is NULL

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;  // start with left to right

        while (!q.empty()) {
            int levelSize = q.size();
            // store nodes for the current level
            vector<int> levelNodes(levelSize);  

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                // insert at the correct position based on the traversal direction
                int index = leftToRight ? i : (levelSize - 1 - i);
                levelNodes[index] = node->val;

                // enqueue child nodes
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            // add current to the result
            result.push_back(levelNodes);
            leftToRight = !leftToRight;  
        }

        return result;
    }
};


//use a loop to extract all elements at the current level
//store them in a temporary vector
//if leftToRight is false, reverse the vector before adding it to the final result
//toggle leftToRight at the end of each level.