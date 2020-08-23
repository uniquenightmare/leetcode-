#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string>
#include<unordered_map>
using namespace std;
#if 0
int main()
{
	string str;
	unordered_map<char, char> mp;
	mp['{'] = '}';
	mp['['] = ']';
	mp['('] = ')';
	stack<char> sta;
	while (cin >> str)
	{
		bool ret = true;
		for (auto& ch : str)
		{
			if (mp[ch])
			{
				sta.push(ch);
			}
			else
			{
				if (sta.empty() || mp[sta.top()] != ch)
				{
					ret = false;
					break;
				}
				else
				{
					sta.pop();
				}
			}
			
		}
		if (ret&&sta.empty()) 
			cout << "True" << endl;
		else 
			cout << "False" << endl;
	}
	return 0;
}
#endif