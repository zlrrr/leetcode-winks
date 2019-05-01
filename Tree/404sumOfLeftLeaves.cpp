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
        //�����Ҷ�ӽڵ�,����0
        if(!root->left)return sumOfLeftLeaves(root->right);
        //���û����Ҷ�ӽڵ㣬ֱ�ӷ����ұ߽ڵ�ֵ
        if(!root->left->left && !root->left->right)
            return root->left->val + sumOfLeftLeaves(root->right);
        //�������Ҷ�ӽڵ㣬��������֮��
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        //�����������֧�ڵ㣬��������֮��
    }
};
