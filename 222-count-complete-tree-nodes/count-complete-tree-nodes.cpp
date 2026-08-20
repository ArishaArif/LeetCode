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
    int leftDepth(TreeNode*root){
        if(!root)return 0;
        return leftDepth(root->left)+1;
    }
    int rightDepth(TreeNode*root){
        if(!root)return 0;
        return rightDepth(root->right)+1;
    }
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int l = leftDepth(root);
        int r = rightDepth(root);
        if (l == r) {
            return (1 << l) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};