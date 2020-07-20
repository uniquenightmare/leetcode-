#define  _CRT_SECURE_NO_WARNINGS 1
string intToRoman(int num) {
	int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	string reps[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	string res;
	for (int i = 0; i < 13; i++)
	{//���ﲻʹ��ͼ���count�ˣ�һ��һ����������
		while (num >= values[i])
		{
			num -= values[i];
			res += reps[i];
		}
		if (num == 0)return res;
	}
	return res;

}