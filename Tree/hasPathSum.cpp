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
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)return false;
        if(!root->left && !root->right){
            if(sum == root->val){
                //只有当到达叶子结点且sum与叶子相等时，才存在
                return true;
            }else{
                return false;
            }
        }
        sum -= root->val;
        return (hasPathSum(root->left,sum) || hasPathSum(root->right,sum));
    }
};
