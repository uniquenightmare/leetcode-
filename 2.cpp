#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* res = l1;
	char tem_r = 0;

	while (1) {
		tem_r = l1->val + l2->val + tem_r;
		l1->val = tem_r % 10;
		tem_r /= 10;

		if (l1->next && l2->next)
		{
			l1 = l1->next;
			l2 = l2->next;
		}
		else
		{
			if (l2->next)//��ʱl1->next��ȻΪNULL
				l1->next = l2->next;
			while (l1->next)
			{
				l1 = l1->next;
				tem_r = l1->val + tem_r;
				l1->val = tem_r % 10;
				tem_r /= 10;
				if (tem_r == 0)
				{
					//�����ٽ�λ��,�����ļ��㶼���˷ѣ���ǰ��ֹ
					break;
				}
			}
			if (tem_r)
				l1->next = new ListNode(tem_r);
			break;
		}
	}

	return res;
}