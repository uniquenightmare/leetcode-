#define  _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<map>
#include<multimap>
#include<functional>
using namespace std;
string frequencySort(string s) {
	map<char, int>mp;
	string ret;
	multimap<int, char, greater<int>> tmp;
	for (auto &ch : s)
	{
		mp[ch]++;
	}
	auto it = mp.begin();
	for (; it != mp.end(); it++)
	{
		tmp.insert(make_pair(it->second, it->first));
	}
	auto it1 = tmp.begin();
	for (; it1 != tmp.end(); it1++)
	{
		int num = it1->first;
		while (num--)
		{
			ret.push_back(it1->second);
		}
	}
	return ret;