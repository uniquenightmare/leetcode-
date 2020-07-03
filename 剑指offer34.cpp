#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<vector<int> > res;
vector<int> path;
//�����㷨
void dfs(TreeNode* root, int sum){
	if (root == nullptr) return;
	//�������
	path.push_back(root->val);
	sum -= root->val;
	if (sum == 0 && root->left == nullptr && root->right == nullptr){
		res.push_back(path);
	}
	dfs(root->left, sum);
	dfs(root->right, sum);
	path.pop_back();//������
}
vector<vector<int>> pathSum(TreeNode* root, int sum) {
	dfs(root, sum);
	return res;
}