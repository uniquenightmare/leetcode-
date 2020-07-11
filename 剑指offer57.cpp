#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {  // ˫ָ��
	vector<int> result;
	int sum, i = 0, j = nums.size() - 1;
	while (i < j){
		sum = nums[i] + nums[j];
		if (sum == target){
			result.push_back(nums[i]);
			result.push_back(nums[j]);
			break;
		}
		if (sum>target) j--;
		else i++;
	}

	return result;
}

