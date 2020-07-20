#define  _CRT_SECURE_NO_WARNINGS 1
int maxArea(vector<int>& height) {
	int begin = 0;
	int end = height.size() - 1;
	int size = 0;
	int _max = 0;
	while (begin < end)
	{
		size = (end - begin)*min(height[begin], height[end]);
		_max = (_max>size) ? _max : size;
		if (height[begin] >height[end])
		{
			end--;
		}
		else
		{
			begin++;
		}
	}
	return _max;
}