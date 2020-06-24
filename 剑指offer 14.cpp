#define  _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
int cuttingRope(int n) {
	if (n < 2) return 0;
	if (n == 2) return 1;
	if (n == 3) return 2;
	int num3 = n / 3;
	if (n % 3 == 1) num3--;
	int num2 = (n - 3 * num3) / 2;
	return (int)(pow(2, num2)) * (int)(pow(3, num3));
}