#define  _CRT_SECURE_NO_WARNINGS 1
int findBottomLeftValue(TreeNode* root) {
	int ret = 0;
	queue<TreeNode*> que;
	que.push(root);
	while (!que.empty())
	{
		ret = que.front()->val;
		int size = que.size();
		while (size)
		{
			TreeNode* node = que.front();
			if (node->left) que.push(node->left);
			if (node->right) que.push(node->right);
			que.pop();
			size--;
		}
	}
	return ret;
}