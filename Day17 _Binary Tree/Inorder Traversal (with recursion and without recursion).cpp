//With Recursion

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

    vector<int>result;
    void inOrder(TreeNode* &root)
    {
   
       if(root==NULL)
       {
           return;
       }

       inOrder(root->left);
       result.push_back(root->val);
       inOrder(root->right);
       
    }

    vector<int> inorderTraversal(TreeNode* root) 
    {
        inOrder(root);
        return result;
    }
};