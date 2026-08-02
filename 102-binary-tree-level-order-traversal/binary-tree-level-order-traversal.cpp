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
    void levelorder(TreeNode*root, vector<vector<int>>& result){
      
        if(root==nullptr){
            return;
        }

        queue<TreeNode*> q;
        q.push(root);
    
        while(!q.empty()){
              vector<int> level;
            int size=q.size();
            for(int i=0; i<size; i++){

            
            TreeNode*current=q.front();
            q.pop();

            level.push_back(current->val);

            if(current->left!=nullptr){
                q.push(current->left);
            }

              if(current->right!=nullptr){
                q.push(current->right);
            }
            }
                result.push_back(level);
        }
     
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        levelorder(root,result);

        return result;
    }
};