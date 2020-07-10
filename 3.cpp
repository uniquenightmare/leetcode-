#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<string>
using namespace std;
int lengthOfLongestSubstring(string s) {
	vector<int>m(256, -1);
	int left = -1;
	int res = 0;
	int len = s.size();
	for (int i = 0; i<len; i++)
	{
		left = fmax(left, m[s[i]]);
		m[s[i]] = i;
		res = fmax(res, i - left);
	}

	return res;
}