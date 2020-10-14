#define  _CRT_SECURE_NO_WARNINGS 1
TreeNode* increasingBST(TreeNode* root) {
	if (!root) return NULL;
	else if (root->left) {
		TreeNode* head = increasingBST(root->left);
		TreeNode* p = head;
		while (p->right) p = p->right;
		p->right = new TreeNode(root->val);
		p = p->right;
		p->right = increasingBST(root->right);
		return head;
	}
	else {
		TreeNode* head = new TreeNode(root->val);
		head->right = increasingBST(root->right);
		return head;
	}
}