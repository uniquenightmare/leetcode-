#define  _CRT_SECURE_NO_WARNINGS 1
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (!root) return NULL;
	if (p->val < root->val&&q->val < root->val)
	{
		root = root->left;
	}
	else if (p->val > root->val&&q->val > root->val)
	{
		root = root->right;
	}
	else
	{
		return root;
	}
	return lowestCommonAncestor(root, p, q);

}