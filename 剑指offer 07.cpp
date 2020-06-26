#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//	if (preorder.size() != inorder.size() || inorder.size() == 0) return nullptr;
//	return buildTree(preorder, inorder, 0, 0, inorder.size());
//}
//
//TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int preIdx, int inLeftStart, int inRightEnd) {
//	if (inRightEnd - inLeftStart == 0) return nullptr;
//
//	int val = preorder[preIdx];
//	int inIdx = inLeftStart;
//	while (inorder[inIdx] != val) {
//		inIdx++;
//	}
//	int inLeftEnd = inIdx;
//	int inRightStart = inIdx + 1;
//
//	TreeNode *root = new TreeNode(val);
//	root->left = buildTree(preorder, inorder, preIdx + 1, inLeftStart, inLeftEnd);
//	root->right = buildTree(preorder, inorder, preIdx + 1 + (inLeftEnd - inLeftStart), inRightStart, inRightEnd);
//	return root;
//}
//
