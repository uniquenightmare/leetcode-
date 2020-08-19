#define  _CRT_SECURE_NO_WARNINGS 1
int countArrangement(int N) {
	int count = 0;
	vector<int> vec;
	vector<bool> bvec(N, false);
	dfs(N, vec, bvec, count);
	return count;
}
void dfs(int size, vector<int> &vec, vector<bool>& bvec, int &count)
{
	if (size == vec.size())
	{
		count++;
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		if ((i % (vec.size() + 1) == 0 || (vec.size() + 1) % i == 0) && !bvec[i - 1])
		{
			bvec[i - 1] = true;
			vec.push_back(i);
			dfs(size, vec, bvec, count);
			bvec[i - 1] = false;
			vec.pop_back();
		}
	}
}