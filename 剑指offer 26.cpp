#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool process(TreeNode *A, TreeNode *B)
{
	if (!B) return true;
	if (!A) return false;
	if (A->val != B->val) return false;
	return process(A->left, B->left) && process(A->right, B->right);
}
bool isSubStructure(TreeNode* A, TreeNode* B) {
	if (!A) return false;
	if (!B) return false;
	return process(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
}