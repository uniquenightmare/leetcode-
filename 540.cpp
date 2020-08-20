#define  _CRT_SECURE_NO_WARNINGS 1
int singleNonDuplicate(vector<int>& nums) {
	int ret = 0;
	for (auto &ch : nums)
	{
		ret ^= ch;
	}
	return ret;
}