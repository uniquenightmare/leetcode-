#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
using namespace std;
vector<int> divingBoard(int shorter, int longer, int k) {
	vector<int> ret;
	if (!k) return ret;
	if (shorter == longer)
	{
		ret.push_back(k*shorter);
		return ret;
	}
	int snum = k, lnum = 0;
	while (snum >= 0)
	{
		lnum = k - snum;
		ret.push_back(lnum * longer + snum *shorter);
		snum--;
	}
	return ret;
}