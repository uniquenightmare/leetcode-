#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
using namespace std;
bool verifyPostorder(vector<int>& postorder) {
	return verifyPostorderl(postorder, 0, postorder.size() - 1);
}
bool verifyPostorderl(vector<int>& postorder, int begin, int end)
{
	if (begin > end)
	{
		return true;
	}
	int lend, lbegin, i = begin;
	for (; i < end; i++)
	{
		if (postorder[i] > postorder[end])
		{
			break;
		}
	}
	lbegin = i;
	lend = i - 1;
	for (i = lbegin; i < end; i++)
	{
		if (postorder[i] < postorder[end]) return false;
	}
	return verifyPostorderl(postorder, begin, lend) && verifyPostorderl(postorder, lbegin, end - 1);
}