#define  _CRT_SECURE_NO_WARNINGS 1
int totalHammingDistance(vector<int>& nums) {
	if (nums.empty()) return 0;
	vector<int> vec(32, 0);
	int ret = 0;
	int n = nums.size();
	for (auto&ch : nums)
	{
		int i = 0;
		while (ch > 0)
		{
			vec[i] += (ch & 0x1);
			ch >>= 1;
			i++;
		}
	}
	for (auto& ch : vec)
	{
		ret += ch * (n - ch);
	}
	return ret;
}