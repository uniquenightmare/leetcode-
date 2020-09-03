#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<memory>
using namespace std;


void dfs(int pre, int pre2, int &sum, int n, int m,int& count)
{
	if (sum == n)
	{
		count += 1;
		return;
	}
	if (sum > n)
	{
		return;
	}
	for (int i = 1; i <= m; i++)
	{
		if (i != pre && i != pre2)
		{
			sum += i;
			dfs(pre2,i, sum,n,m, count);
			sum -= i;

		}
	}
}
	
int main()
{
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int ret = 0;
	dfs(-1,-1,sum,n,m,ret);
	cout << ret << endl;
	system("pause");
	return 0;
}