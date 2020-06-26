#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<queue>
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
using namespace std;
vector<int> levelOrder(TreeNode* root) {
	vector<int> ret;
	if (!root) return ret;
	queue<TreeNode*> que;
	que.push(root);
	int size, i = 0;;
	while (!que.empty())
	{
		size = que.size();
		while (size)
		{
			TreeNode *node = que.front();
			ret.push_back(node->val);
			if (node->left) que.push(node->left);
			if (node->right) que.push(node->right);
			que.pop();
			size--;
		}
	}
	return ret;
}