class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        ans.clear();
        if (root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            queue<TreeNode*> temp;
            vector<int> v1;
            while(!q.empty()){
                TreeNode* temp1 = q.front();
                v1.push_back(temp1->val);
                if (temp1->left!=NULL) temp.push(temp1->left);
                if (temp1->right!=NULL) temp.push(temp1->right);
                q.pop();
            }
            q = temp;
            ans.push_back(v1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Very important