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
    int findDepthLeft(TreeNode* root){
        if (root == NULL)
            return 0;
        return 1 + findDepthLeft(root->left);
    }

    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;

        int depth_L = findDepthLeft(root->left);
        int depth_R = findDepthLeft(root->right);
        int counted = pow(2, depth_R);

        if (depth_L == depth_R)
            return counted + countNodes(root->right);
        else
            return counted + countNodes(root->left);
    }
};
