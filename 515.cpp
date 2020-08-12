#define  _CRT_SECURE_NO_WARNINGS 1
vector<int> largestValues(TreeNode* root) {
	if (!root) return{};
	queue<TreeNode*> que;
	que.push(root);
	vector<int> ret;
	while (que.size())
	{
		int size = que.size();
		int max = INT_MIN;
		while (size)
		{
			TreeNode* node = que.front();
			max = max < node->val ? node->val : max;
			if (node->left) que.push(node->left);
			if (node->right) que.push(node->right);
			que.pop();
			size--;
		}
		ret.push_back(max);
	}
	return ret;
}