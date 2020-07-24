#define  _CRT_SECURE_NO_WARNINGS 1
int maxDepth(Node* root) {
	if (!root)return 0;
	int height = 0;
	for (auto &ch : root->children) {
		height = max(height, maxDepth(ch));
	}
	return height + 1;

}
