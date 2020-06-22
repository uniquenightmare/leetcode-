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

	//����ԭ���� ����������ڵ㲢����ӳ���ϵ
	unordered_map<Node*, Node*> map; //key: ԭ����ڵ�  value: �´����ڵ� 

	Node* cur = head;
	while (cur)
	{
		map[cur] = new Node(cur->val);
		cur = cur->next;
	}

	//����ԭ���� ����map���������random
	cur = head;
	while (cur)
	{
		map[cur]->next = map[cur->next];
		map[cur]->random = map[cur->random];
		cur = cur->next;
	}

	return map[head];


}
