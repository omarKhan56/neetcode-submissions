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
    TreeNode* deleteNode(TreeNode* root, int key) {

        // If root is NULL, key is not present
        if (root == NULL) {
            return NULL;
        }

        // If key is smaller, search in left subtree
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }

        // If key is greater, search in right subtree
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        // key == root->val
        // We found the node that needs to be deleted
        else {

            // Case 1:
            // No left child
            // Return the right child to take its place
            if (root->left == NULL) {
                return root->right;
            }

            // Case 2:
            // No right child
            // Return the left child to take its place
            if (root->right == NULL) {
                return root->left;
            }

            // Case 3:
            // Node has both left and right children

            // Start from the right subtree
            //we have used INORDER SUCCESSOR, therefore root->right
            //The inorder successor of a node is : The smallest value greater than the current node.
            TreeNode* successor = root->right;

            // Find the smallest value in the right subtree
            // The smallest value will be the leftmost node
            while (successor->left != NULL) {
                successor = successor->left;
            }

            // Replace current node's value with successor's value
            root->val = successor->val;

            // Delete the original successor node
            root->right = deleteNode(root->right, successor->val);
        }

        // Return the current root
        return root;
    }
};

