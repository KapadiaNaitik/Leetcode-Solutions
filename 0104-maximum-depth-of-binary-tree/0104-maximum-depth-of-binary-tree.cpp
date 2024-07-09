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
    int maxDepth(TreeNode* root) {
        int ans=0;
        if(root==NULL) return ans;
        queue<TreeNode*> levels;
        levels.push(root);
        while(levels.size()!=0){
            int size=levels.size();
            for(int i=0;i<size;i++){
                TreeNode *node=levels.front();
                levels.pop();
                if(node->left!=NULL) levels.push(node->left);
                if(node->right!=NULL) levels.push(node->right);


            }
             ans++;

        }
        return ans;

    
    }
};