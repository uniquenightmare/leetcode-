#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
using namespace std;
class Solution {
public:
	vector<vector<int>> res;
	vector<int> temp;//��ֹ������ʼ������ 
	void dfs(TreeNode* root, int sum){
		int resum = sum - root->val;
		temp.push_back(root->val);
		if (resum == 0 && !root->left&&!root->right)
			res.push_back(temp);//�ҵ��� 
		if (root->left)
			dfs(root->left, resum);
		if (root->right)
			dfs(root->right, resum);
		temp.pop_back();//���� 
	}
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		if (root)dfs(root, sum);
		return res;
	}
};