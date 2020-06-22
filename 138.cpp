#define  _CRT_SECURE_NO_WARNINGS 1
#include<unordered_map>
#include<iostream>
using namespace std;
class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};

Node* copyRandomList(Node* head) {
	if (head == nullptr)
		return head;

	//遍历原链表 创建新链表节点并建立映射关系
	unordered_map<Node*, Node*> map; //key: 原链表节点  value: 新创建节点 

	Node* cur = head;
	while (cur)
	{
		map[cur] = new Node(cur->val);
		cur = cur->next;
	}

	//遍历原链表 根据map找新链表的random
	cur = head;
	while (cur)
	{
		map[cur]->next = map[cur->next];
		map[cur]->random = map[cur->random];
		cur = cur->next;
	}

	return map[head];


}
