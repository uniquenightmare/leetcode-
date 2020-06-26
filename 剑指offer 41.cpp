#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int ret = 1;
	for (auto &ch : nums)
	{
		if (ch > ret)
		{
			return ret;
		}
		else if (ch == ret)
		{
			ret++;
		}
	}
	return ret;
}