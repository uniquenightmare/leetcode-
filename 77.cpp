#define  _CRT_SECURE_NO_WARNINGS 1
int My_max(int* nums, int numsSize)
{
	int i = 0;
	int max = nums[0];
	int index = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (max < nums[i])
		{
			index = i;
			max = nums[i];
		}
	}
	return index;
}
int dominantIndex(int* nums, int numsSize){
	if (numsSize == 0)
	{
		return -1;
	}
	int index = My_max(nums, numsSize);
	int tmp = nums[0];
	nums[0] = nums[index];
	nums[index] = tmp;
	int max = nums[0];
	for (int i = 1; i < numsSize; i++)
	{
		if (max < nums[i] * 2)
		{
			return -1;
		}
	}
	return index;
}