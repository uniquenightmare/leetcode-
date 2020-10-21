#define  _CRT_SECURE_NO_WARNINGS 1
vector<int> twoSum(vector<int>& numbers, int target) {
	int begin = 0;
	int end = numbers.size() - 1;
	while (begin < end)
	{
		int num = numbers[begin] + numbers[end];
		if (num == target) return{ begin + 1, end + 1 };
		else if (num < target)
		{
			begin++;
		}
		else
		{
			end--;
		}
	}
	return{};
}