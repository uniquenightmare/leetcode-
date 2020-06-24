#define  _CRT_SECURE_NO_WARNINGS 1
class solution
{
public:
	double MyPow(double x, long n)
	{
		if (!n) return 1;
		if (n == 1) return x;

		double num = MyPow(x, n >> 1);
		num *= num;
		if (n & 0x1) num *= x;
		return num;
	}
	double myPow(double x, int n) {
		if (n < 0) return 1 / MyPow(x, -(long)(n));
		return MyPow(x, n);
	}
};

