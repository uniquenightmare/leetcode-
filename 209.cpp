#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<math.h>
using std::vector;
int minSubArrayLen(int s, vector<int>& nums) {
	int n = nums.size();
	if (n == 0) {
		return 0;
	}
	int ans = INT_MAX;
	int start = 0, end = 0;
	int sum = 0;
	while (end < n) {
		sum += nums[end];
		while (sum >= s) {
			ans = fmin(ans, end - start + 1);
			sum -= nums[start];
			start++;
		}
		end++;
	}
	return ans == INT_MAX ? 0 : ans;

}