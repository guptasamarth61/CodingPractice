/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
long long ans = 0, s=0;
void dfs(TreeNode* root){
    if (root==NULL) return;
    s=s*10+root->val;
    if (root->left==NULL and root->right==NULL) ans+=(s%1003);
    if(root->left!=NULL and root->left->val!=-1) {
        dfs(root->left);
        s=s/10;
    }
    if(root->right!=NULL and root->right->val!=-1) {
        dfs(root->right);
        s=s/10;
    }
 }
int Solution::sumNumbers(TreeNode* A) {
    ans = 0;
    s = 0;
    dfs(A);
    return ans%1003;
}

//not working in some test cases - have to figure out why?
//good approach of recursion--backtracking also