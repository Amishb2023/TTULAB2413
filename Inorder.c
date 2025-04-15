int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* tree_vals = (int*)malloc(1000 * sizeof(int));
*returnSize = 0;
void inorder(struct TreeNode* tree) {
        if (tree) {
            inorder(tree->left); 
            tree_vals[*returnSize] = tree->val;
            (*returnSize)++; 
            inorder(tree->right); 
        }
    }
 inorder(root); 
    return tree_vals;  
}
