#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> m;
	for (int i = 0; i < nums.size(); m[target - nums[i - 1]] = i++){
		if (m.count(nums[i])) return{ m[nums[i]], i };
	}
	return{ -1, -1 };

}