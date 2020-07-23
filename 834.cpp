#define  _CRT_SECURE_NO_WARNINGS 1
string toGoatLatin(string S) {
	int i = 1;
	unordered_map<char, bool> mp;
	mp['a'] = true;
	mp['i'] = true;
	mp['o'] = true;
	mp['u'] = true;
	mp['e'] = true;
	mp['A'] = true;
	mp['I'] = true;
	mp['O'] = true;
	mp['U'] = true;
	mp['E'] = true;
	string str;
	string ret;
	for (auto &ch : S)
	{
		if (ch != ' ')
		{
			str.push_back(ch);
		}
		else
		{

			if (!mp[str[0]]){
				char c = str[0];
				str.erase(str.begin());
				str.push_back(c);
			}
			str += "ma";
			int count = i;
			while (count--)
			{
				str.push_back('a');
			}
			i++;
			ret += str;
			ret.push_back(' ');
			str.clear();
		}
	}
	if (str.size())
	{
		if (!mp[str[0]]){
			char c = str[0];
			str.erase(str.begin());
			str.push_back(c);
		}
		str += "ma";
		int count = i;
		while (count--)
		{
			str.push_back('a');
		}

		ret += str;

		str.clear();
	}
	if (ret[ret.size() - 1] == ' ')
	{
		ret.pop_back();
	}
	return ret;
}