#define  _CRT_SECURE_NO_WARNINGS 1
bool isValid(string s) {
	stack<char> bra;
	map<char, char> mp;
	mp['('] = ')';
	mp['['] = ']';
	mp['{'] = '}';
	for (auto &ch : s)
	{
		if (ch == '(' || ch == '{' || ch == '[')
		{
			bra.push(ch);
		}
		else
		{
			if (bra.size() && mp[bra.top()] == ch)
			{
				bra.pop();
			}
			else
			{
				return false;
			}
		}
	}
	if (bra.empty()) return true;
	return false;
}