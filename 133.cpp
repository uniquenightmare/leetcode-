#define  _CRT_SECURE_NO_WARNINGS 1
unordered_map<Node*, Node*> visited;
Node* cloneGraph(Node* node) {
	if (!node)
		return nullptr;

	if (visited.find(node) != visited.end())
		return visited[node];

	Node* cloneNode = new Node(node->val);
	visited[node] = cloneNode;

	for (auto &i : node->neighbors)
		cloneNode->neighbors.push_back(cloneGraph(i));

	return cloneNode;


}