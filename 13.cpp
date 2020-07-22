#define  _CRT_SECURE_NO_WARNINGS 1
int read(char a){
	switch (a){
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default:

		return 0;
	}
}



int romanToInt(char *arr)
{
	int i = 0;
	int m = 0;
	int n = 0;
	int result = 0;
	while (1)
	{
		n = read(*arr);
		if (n == 0)
		{
			break;
		}
		if (*(arr + 1) != '\0')
		{
			m = read(*(arr + 1));
		}
		else
		{
			m = 0;
		}
		if (n >= m)
		{
			result += n;
		}
		else
		{
			result -= n;
		}
		arr++;
	}

	return result;

}
