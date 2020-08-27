#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int constructMaximumBinaryTreeprocess1(vector<int>& vec, int begin, int end)
{
	int max = 0;
	int idx = begin;
	for (int i = begin; i < end; i++)
	{
		if (vec[i] > max)
		{
			max = vec[i];
			idx = i;
		}
	}
	return idx;

}
TreeNode* constructMaximumBinaryTreeprocess2(vector<int>& vec, int begin, int end)
{
	if (begin > end) return NULL;
	int mid = constructMaximumBinaryTreeprocess1(vec, begin, end);
	TreeNode* root = new TreeNode(vec[mid]);
	root->left = constructMaximumBinaryTreeprocess2(vec, begin, mid - 1);
	root->right = constructMaximumBinaryTreeprocess2(vec, mid + 1, end);
	return root;
}
TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
	return constructMaximumBinaryTreeprocess2(nums, 0, nums.size() - 1);
}
int main()
{
	vector<int> ret = { 3, 2, 1, 6, 0, 5};
	TreeNode* node = constructMaximumBinaryTree(ret);
}