#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<stack>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
vector<int> reversePrint(ListNode* head) {
	stack<int> sta;
	vector<int>ret;
	while (head)
	{
		sta.push(head->val);
		head = head->next;
	}
	while (!sta.empty())
	{
		ret.push_back(sta.top());
		sta.pop();
	}
	return ret;
}