#define  _CRT_SECURE_NO_WARNINGS 1
string removeOuterParentheses(string S) {
	string res;
	//��¼��Ч����
	stack<char> stack;
	//i���� j�´β�����ʼλ��
	for (int i = 0, j = 0; i<S.size(); i++){
		if (S[i] == '(') stack.push('(');
		else stack.pop();
		if (stack.size() == 0) res += S.substr(j + 1, i - j - 1), j = i + 1;
	}
	return res;
}