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

		// �ݹ���������ӽڵ�������ֵ
		// ֻ���������ֵ���� 0 ʱ���Ż�ѡȡ��Ӧ�ӽڵ�
		int leftGain = fmax(maxGain(node->left), 0);
		int rightGain = fmax(maxGain(node->right), 0);

		// �ڵ�����·����ȡ���ڸýڵ��ֵ��ýڵ�������ӽڵ�������ֵ
		int priceNewpath = node->val + leftGain + rightGain;

		// ���´�
		maxSum = fmax(maxSum, priceNewpath);

		// ���ؽڵ�������ֵ
		return node->val + fmax(leftGain, rightGain);
	}

	int maxPathSum(TreeNode* root) {
		maxGain(root);
		return maxSum;
	}

};