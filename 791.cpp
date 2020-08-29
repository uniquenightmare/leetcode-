#include<iostream>
#include<string>
#include<math.h>
#include<unordered_map>
#include <algorithm>
using namespace std;

string customSortString(string S, string T) {
	unordered_map<char, int> mp;
	for (auto &ch : T)
	{
		mp[ch]++;
	}
	T.clear();
	for (auto &ch : S)
	{
		
		while (mp[ch])
		{
			T.push_back(ch);
			mp[ch]--;
		}
	}
	auto it = mp.begin();
	for (;it != mp.end(); it++)
	{
		int size = it->second;
		while (size--)
		{
			T.push_back(it->first);
		}
	}
	return T;
}

int main()
{
	cout << customSortString("cba", "abcd") << endl;
	system("pause");
	return 0;
}