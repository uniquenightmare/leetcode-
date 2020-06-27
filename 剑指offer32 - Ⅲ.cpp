#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>>ret;
	if (!root) return ret;
	queue<TreeNode*>que;
	que.push(root);

	int count = 0;
	while (que.size())
	{
		vector<int>vec;
		int size = que.size();
		while (size)
		{
			TreeNode* node = que.front();
			vec.push_back(node->val);
			if (node->left) que.push(node->left);
			if (node->right) que.push(node->right);
			que.pop();
			size--;
		}
		if (count & 0x1)
		{
			reverse(vec.begin(), vec.end());
		}
		count++;
		ret.push_back(vec);
	}
	return ret;

}