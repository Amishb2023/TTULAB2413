
bool isMirror(struct TreeNode* tran1, struct TreeNode* tran2) {
    if (tran1 == NULL && tran2 == NULL) return true;
    if (tran1 == NULL || tran2 == NULL) return false;
    return (tran1->val == tran2->val)
        && isMirror(tran1->left, tran2->right)
        && isMirror(tran1->right, tran2->left);
}
bool isSymmetric(struct TreeNode* root) {
     if (root == NULL) return true;
    return isMirror(root->left, root->right);
}
