#define  _CRT_SECURE_NO_WARNINGS 1
int lastStoneWeight(vector<int>& stones) {
	multiset<int, greater<int>> mset(stones.begin(), stones.end());
	while (mset.size() > 1)
	{
		int pre = *(mset.begin());
		mset.erase(mset.begin());
		int end = *(mset.begin());
		mset.erase(mset.begin());
		if (pre != end)mset.insert(pre - end);
	}
	return mset.empty() ? 0 : *(mset.begin());
}