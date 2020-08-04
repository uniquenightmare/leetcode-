#define  _CRT_SECURE_NO_WARNINGS 1
vector<int> postorderTraversal(TreeNode* root) {
	stack<TreeNode*> sta;
	vector<int> ret;
	if (!root) return ret;
	sta.push(root);
	while (!sta.empty())
	{
		TreeNode* node = sta.top();
		sta.pop();
		if (node)
		{
			sta.push(node);
			sta.push(NULL);
			if (node->right) sta.push(node->right);
			if (node->left) sta.push(node->left);
		}
		else
		{
			ret.push_back(sta.top()->val);
			sta.pop();
		}
	}
	return ret;
}