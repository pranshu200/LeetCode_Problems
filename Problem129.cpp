/*129. Sum Root to Leaf Numbers*/


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
    long long sum=0;
    void sum_root(TreeNode* root, int temp)
    {
        if(root==NULL)
            return;
        if(!root->left && !root->right)
        {
            sum+=temp*10 + root->val;
            return;
        }
        temp=temp*10+root->val;
        if(root->left)
        sum_root(root->left,temp);
        if(root->right)
        sum_root(root->right,temp);
    }
    int sumNumbers(TreeNode* root) {
        sum_root(root,0);
        return sum;
    }
    
};