#define  _CRT_SECURE_NO_WARNINGS 1
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	stack<int> st1, st2;
	ListNode *head = NULL;
	while (l1)
	{
		st1.push(l1->val);
		l1 = l1->next;
	}
	while (l2)
	{
		st2.push(l2->val);
		l2 = l2->next;
	}
	int count = 0;
	while (st1.size() || st2.size() || count)
	{
		int num = count;
		if (st1.size())
		{
			num += st1.top();
			st1.pop();
		}
		if (st2.size())
		{
			num += st2.top();
			st2.pop();
		}
		if (num > 9)
		{
			count = 1;
			num %= 10;
		}
		else
		{
			count = 0;
		}
		ListNode *node = new ListNode(num);
		node->next = head;
		head = node;
	}
	return head;
}