#define  _CRT_SECURE_NO_WARNINGS 1
#include<string>
using namespace std;
string replaceSpace(string s) {
	int blanknum = 0;
	int i = s.size() - 1;
	int j = 0;
	for (auto &ch : s)
	{
		if (ch == ' ') blanknum++;
	}
	s.resize(s.size() + blanknum * 2);
	j = s.size() - 1;
	while (i != j)
	{
		if (s[i] != ' ')
		{
			s[j] = s[i];
			i--;
			j--;
		}
		else
		{
			i--;
			s[j--] = '0';
			s[j--] = '2';
			s[j--] = '%';
		}
	}
	return s;
}

