#define  _CRT_SECURE_NO_WARNINGS 1
string longestWord(vector<string>& words) {
	unordered_set<string> set1;   //����Ҫ����������unordered_mapЧ�ʸ���
	for (string word : words){
		set1.insert(word);         //��words�е�ÿ��Ԫ�ز���set����
	}
	string res = "";
	int count = 0;
	for (string word : words){
		if (word.size() > res.size() || (word.size() == res.size() && word.compare(res) < 0)){ //ֻ���Ǳȵ�ǰres�� ���ߺ�resһ�������ֵ����resС��stringԪ��
			bool flag = true;
			for (int i = 1; i < word.size(); ++i){
				string tmp = word.substr(0, i);   //ȡǰ׺��ǰ׺��������
				if (set1.count(tmp))   //���ǰ׺��set�����У���ô�ͼ���
					continue;
				else{                   //ǰ׺���ڣ�˵��������Ҫ����������
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