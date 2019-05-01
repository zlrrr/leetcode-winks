/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)return 0;
        if(!root->left && !root->right)return 0;
        //如果是叶子节点,返回0
        if(!root->left)return sumOfLeftLeaves(root->right);
        //如果没有左叶子节点，直接返回右边节点值
        if(!root->left->left && !root->left->right)
            return root->left->val + sumOfLeftLeaves(root->right);
        //如果有左叶子节点，返回左右之和
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        //如果是正常分支节点，返回左右之和
    }
};
