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
    int sumEvenGrandparent(TreeNode* rootee) {
        int sum=0;
        queue<TreeNode *> q;
        q.push(rootee);
        while(q.size()!=0){
            TreeNode *root= q.front();

        if(root->left!=NULL){
            if(root->left->left!=NULL &&q.front()->val%2==0){
                sum+=root->left->left->val;
            }
              if(root->left->right!=NULL  &&q.front()->val%2==0){
                sum+=root->left->right->val;
            }
            q.push(root->left);
        

        }
        if(root->right!=NULL){
            if(root->right->left!=NULL  &&q.front()->val%2==0){
                sum+=root->right->left->val;
            }
              if(root->right->right!=NULL  && q.front()->val%2==0){
                sum+=root->right->right->val;
            }
            q.push(root->right);


        }
        q.pop();


        
    }
    return sum;
    }
};