#define  _CRT_SECURE_NO_WARNINGS 1
string removeKdigits(string num, int k) {
	stack<char> sta;
	for (auto &ch : num)
	{
		while (!sta.empty() && sta.top() > ch && k)
		{
			sta.pop();
			k--;
		}
		if (sta.empty() && ch == '0')
		{
			continue;
		}
		sta.push(ch);
	}
	string ret;
	while (!sta.empty())
	{
		if (k)
		{
			k--;
		}
		else
		{
			ret.push_back(sta.top());
		}
		sta.pop();
	}
	reverse(ret.begin(), ret.end());
	return ret == "" ? "0" : ret;
}