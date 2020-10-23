#define  _CRT_SECURE_NO_WARNINGS 1
int numSpecialEquivGroups(vector<string>& A) {
	unordered_set<string> set;
	for (int i = 0; i < A.size(); i++) {
		string odd, even;
		for (int j = 0; j < A[i].size(); j++)
		if (j % 2 == 0) even += A[i][j];
		else odd += A[i][j];
		sort(even.begin(), even.end());
		sort(odd.begin(), odd.end());
		set.insert(even + odd);
	}
	return set.size();

}