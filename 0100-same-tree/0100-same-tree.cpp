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
void inorder(TreeNode* root, vector<int>& result) {
    if (root == nullptr) return;

    inorder(root->left, result);
    result.push_back(root->val); // store in vector
    inorder(root->right, result);
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
     vector<int> inorderResult;
     vector<int> inorderResult1;
     inorder(p, inorderResult);  
     inorder(q,  inorderResult1);
     if (inorderResult.size() != inorderResult1.size()) 
     {
    return false;
     }
     for(int i = 0 ; i < inorderResult.size() ; i++)
     {
        if(inorderResult[i] != inorderResult1[i])
        {
            return false;
        }
     }
     return true;
    }
};