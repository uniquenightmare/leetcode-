#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
private:
	int maxSum = INT_MIN;

public:
	int maxGain(TreeNode* node) {
		if (node == nullptr) {
			return 0;
		}

		// 递归计算左右子节点的最大贡献值
		// 只有在最大贡献值大于 0 时，才会选取对应子节点
		int leftGain = fmax(maxGain(node->left), 0);
		int rightGain = fmax(maxGain(node->right), 0);

		// 节点的最大路径和取决于该节点的值与该节点的左右子节点的最大贡献值
		int priceNewpath = node->val + leftGain + rightGain;

		// 更新答案
		maxSum = fmax(maxSum, priceNewpath);

		// 返回节点的最大贡献值
		return node->val + fmax(leftGain, rightGain);
	}

	int maxPathSum(TreeNode* root) {
		maxGain(root);
		return maxSum;
	}

};