#define  _CRT_SECURE_NO_WARNINGS 1
string convert(string s, int numRows) {
	if (numRows < 2) return s;
	vector<string>z;
	string ret;
	int i = 0;
	int flag = -1;
	z.resize(numRows);
	for (auto &ch : s)
	{
		z[i].push_back(ch);
		if (i == 0 || i == numRows - 1) flag = -flag;
		i += flag;
	}
	for (auto &ch : z)
	{
		ret += ch;
	}
	return ret;
}