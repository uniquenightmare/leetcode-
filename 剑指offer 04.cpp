#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
using namespace std;
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	if (!matrix.size() || !matrix[0].size()) return false;
	int i = 0;
	int j = matrix[0].size() - 1;
	while (i < matrix.size() && j >= 0)
	{
		if (matrix[i][j] == target) return true;
		if (matrix[i][j] > target) j--;
		else
		{
			i++;
		}
	}
	return false;
}