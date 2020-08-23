#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int CountZero(int n) {
	int sum = 0;
	while (n >= 5) {
		n /= 5;
		sum += n;
	}
	return sum;
}
int main()
{
	int n;
	while (cin >> n)
	{
		cout << CountZero(n) << endl;
	}
	return 0;
}