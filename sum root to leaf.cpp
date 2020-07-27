/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans;
void dfs(TreeNode* root, int B){
    if (root==NULL) return;
    if(root->left==NULL and root->right==NULL and B==0) ans=1;
    
    if(root->left!=NULL and root->left->val!=-1) dfs(root->left, B-root->left->val);
    if(root->right!=NULL and root->right->val!=-1) dfs(root->right, B-root->right->val);
}
int Solution::hasPathSum(TreeNode* A, int B) {
    ans = 0;
    if (A==NULL) return 0;
    dfs(A,B-A->val);
    return ans;
}

//different way using parameters