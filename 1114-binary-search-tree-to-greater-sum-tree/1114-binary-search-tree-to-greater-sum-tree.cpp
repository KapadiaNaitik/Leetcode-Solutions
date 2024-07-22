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

    void reverseInorder(TreeNode *root,int &sum){

        if(root==NULL) return;

        reverseInorder(root->right,sum);
        sum+=root->val;
        cout<<root->val<<" "<<sum<<endl;
        root->val=sum;
        reverseInorder(root->left,sum);


    }
    TreeNode* bstToGst(TreeNode* root) {

        int sum=0;
        reverseInorder(root,sum);
        return root;
        





        
    }
};