#define  _CRT_SECURE_NO_WARNINGS 1
string longestWord(vector<string>& words) {
	unordered_set<string> set1;   //不需要排序，所以用unordered_map效率更高
	for (string word : words){
		set1.insert(word);         //将words中的每个元素插入set集合
	}
	string res = "";
	int count = 0;
	for (string word : words){
		if (word.size() > res.size() || (word.size() == res.size() && word.compare(res) < 0)){ //只考虑比当前res长 或者和res一样长且字典序比res小的string元素
			bool flag = true;
			for (int i = 1; i < word.size(); ++i){
				string tmp = word.substr(0, i);   //取前缀，前缀长度累增
				if (set1.count(tmp))   //如果前缀在set集合中，那么就继续
					continue;
				else{                   //前缀不在，说明不符合要求，立即跳出
					flag = false;
					break;
				}
			}
			if (flag)
				res = word;
		}
	}
	return res;

}