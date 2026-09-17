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
    int balanced(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int left = balanced(root->left);
        int right = balanced(root->right);

        // If either subtree is already unbalanced
        if (left == -1 || right == -1) {
            return -1;
        }

        // If current node makes the tree unbalanced
        if (abs(right - left) > 1) {
            return -1;
        }

        // Return height
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) { return balanced(root) != -1; }
};
