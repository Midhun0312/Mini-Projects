TreeNode *invertTree(TreeNode *root)
{
    if (root)
    {
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
    }
    return root;
}