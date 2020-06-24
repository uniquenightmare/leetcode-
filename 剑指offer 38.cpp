#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
	vector<string> permutation(string s) {
		vector<bool> judge(s.size(), false);
		string str;
		dfs(judge, s, str);
		return ret;
	}
	void dfs(vector<bool>& judge, string s, string & str)
	{
		if (str.size() == s.size() && !mp[str])
		{
			mp[str] = true;
			ret.push_back(str);
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (!judge[i])
			{
				judge[i] = true;
				str.push_back(s[i]);
				dfs(judge, s, str);
				judge[i] = false;
				str.pop_back();
			}
		}
	}
private:
	vector<string>ret;
	map<string, bool>mp;
};