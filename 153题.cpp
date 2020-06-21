#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {
	int left = 0;
	int right = nums.size() - 1;
	int mid;
	while (left < right)
	{
		mid = (right - left) / 2 + left;
		if (nums[mid] < nums[right])
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return nums[left];
}