#define  _CRT_SECURE_NO_WARNINGS 1
int myAtoi(string str) {
	int i = 0;
	int flag = 1;
	int ret = 0;
	for (auto &ch : str)
	{
		if (ch != ' ')
		{
			break;
		}
		i++;
	}
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	else if (str[i] < '0' || str[i] >'9')
	{
		return 0;
	}
	for (; i < (int)str.size(); i++)
	{
		if (flag == 1)
		{
			if (str[i] < '0' || str[i] >'9')
			{
				break;
			}
			else
			{
				if (ret  > INT_MAX / 10 || (ret == INT_MAX / 10 && str[i] - '0' > 7))
				{
					return INT_MAX;
				}
				else
				{
					ret *= 10;
					ret += str[i] - '0';
				}
			}
		}
		else
		{
			if (str[i] < '0' || str[i] >'9')
			{
				break;
			}
			else
			{
				if (ret  > INT_MAX / 10 || (ret == INT_MAX / 10 && str[i] - '0' >= 8))
				{
					return INT_MIN;
				}
				else
				{
					ret *= 10;
					ret += str[i] - '0';
				}
			}
		}
	}
	return flag *ret;
}