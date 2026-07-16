class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int lcount=countNodes(root->left);
        int rcount=countNodes(root->right);
        return lcount+rcount+1;

    }
};