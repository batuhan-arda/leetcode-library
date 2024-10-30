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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) // Check if root is nullptr
            return nullptr;
        TreeNode* left = root->left;
        TreeNode* right = root->right;

        TreeNode* leftInverted = invertTree(root->left);
        TreeNode* rightInverted = invertTree(root->right);

        root->left = right;
        root->right = left;

        return root;
    }
};
