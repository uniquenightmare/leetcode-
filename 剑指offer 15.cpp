#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int hammingWeight(uint32_t n) {
	int count = 0;
	while (n)
	{
		if (n & 1) count++;
		n >>= 1;
	}
	return count;
}