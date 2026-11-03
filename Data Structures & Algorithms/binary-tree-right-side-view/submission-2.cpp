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
    vector<int> rightSideView(TreeNode* root) {
    vector<int>finalResult;
    queue<TreeNode*>q1;

    if(root==NULL)return {};
    q1.push(root);
    while(!q1.empty()){
        int size=q1.size();
        for(int i=0;i<size;i++){
            TreeNode* front=q1.front();
            q1.pop();
            if(i==size-1)finalResult.push_back(front->val);
            if(front->left!=NULL)q1.push(front->left);
            if(front->right!=NULL)q1.push(front->right);
        }

    }
return finalResult;

    }
};
