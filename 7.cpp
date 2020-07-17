#define  _CRT_SECURE_NO_WARNINGS 1
int reverse(int x)
{
	int result = 0;
	int num = 0;//对应位数上的数字

	while (x != 0)
	{
		if (result  > INT_MAX / 10 || (((result) == (INT_MAX / 10)) && num > 7)
			|| result < -INT_MAX / 10 || (result == (-INT_MAX / 10) && num > 7))
		{
			return 0;
		}
		num = x % 10;
		x /= 10;
		result = result * 10 + num;

	}
	return result;
}