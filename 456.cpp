#define  _CRT_SECURE_NO_WARNINGS 1
bool find132pattern(vector<int>& nums) {
	int n = nums.size();
	int two = INT_MIN;

	stack<int> stk;

	for (int i = n - 1; i >= 0; i--)
	{
		if (two > nums[i]) return true;
		while (stk.size() && nums[stk.top()] < nums[i])
		{
			two = nums[stk.top()];
			stk.pop();
		}
		stk.push(i);
	}

	return false;


}