#define  _CRT_SECURE_NO_WARNINGS 1
bool isSameTree(TreeNode* p, TreeNode* q) {
	if (!p&&!q)
	{
		return true;
	}
	if (p&&!q) return false;
	if (!p&&q) return false;
	if (p->val != q->val)
	{
		return false;
	}
	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}