#define  _CRT_SECURE_NO_WARNINGS 1
void sortColors(vector<int>& nums) {
	map<int, int> mp;
	for (auto &ch : nums)
	{
		mp[ch]++;
	}
	nums.clear();
	auto it = mp.begin();
	for (; it != mp.end(); it++)
	{
		int size = it->second;
		while (size)
		{
			nums.push_back(it->first);
			size--;
		}
	}
}