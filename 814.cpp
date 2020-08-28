#define  _CRT_SECURE_NO_WARNINGS 1
int pruneTreeprocess(TreeNode* root, TreeNode* parent, int flag)
{
	if (!root) return 0;
	int left = pruneTreeprocess(root->left, root, 1);
	int right = pruneTreeprocess(root->right, root, 0);
	if (left + right + root->val == 0)
	{
		if (flag)
		{
			parent->left = nullptr;
		}
		else
		{
			parent->right = nullptr;
		}
	}
	return left + right + root->val;
}
TreeNode* pruneTree(TreeNode* root) {
	TreeNode* head = new TreeNode(-1);
	head->left = root;
	pruneTreeprocess(root, head, 1);
	return head->left;
}