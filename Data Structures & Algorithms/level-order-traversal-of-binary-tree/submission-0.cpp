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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q1;
        vector<vector<int>> ans;
        if (root == NULL) return {};
        q1.push(root);
        while (!q1.empty()) {
            int size = q1.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* front = q1.front();
                q1.pop();
                level.push_back(front->val);

                if (front->left != NULL) q1.push(front->left);

                if (front->right != NULL) q1.push(front->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
