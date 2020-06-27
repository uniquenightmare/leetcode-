#define  _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<unordered_map>
using std::string;
using std::unordered_map;
char firstUniqChar(string s) {
	unordered_map<char, int>mp;
	for (auto &ch : s)
	{
		mp[ch]++;
	}

	for (auto &ch : s)
	{
		if (mp[ch] == 1) return ch;
	}
	return ' ';
}