#define  _CRT_SECURE_NO_WARNINGS 1
string intToRoman(int num) {
	int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	string reps[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	string res;
	for (int i = 0; i < 13; i++)
	{//这里不使用图里的count了，一遍一遍来就行了
		while (num >= values[i])
		{
			num -= values[i];
			res += reps[i];
		}
		if (num == 0)return res;
	}
	return res;

}