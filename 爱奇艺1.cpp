#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<set>
#if 0
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int i = 0;
		int j = 0;
		set<pair<int, int>> mset;
		mset.insert(make_pair(i, j));
		bool ret = true;
		for (auto &ch : str)
		{
			if (ch == 'N')
			{
				i--;
			}
			else if (ch == 'S')
			{
				i++;
			}
			else if (ch == 'W')
			{
				j--;
			}
			else
			{
				j++;
			}
			if (mset.count(make_pair(i, j)))
			{
				ret = false;
				break;
			}
			mset.insert(make_pair(i, j));
		}
		if (ret)
			cout << "False" << endl;
		else
			cout << "True" << endl;
	}
	return 0;
}
#endif
