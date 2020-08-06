#define  _CRT_SECURE_NO_WARNINGS 1
void gameOfLife(vector<vector<int>>& board) {
	vector<vector<int>> ret(board.size() + 2, vector<int>(board[0].size() + 2, 0));
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			ret[i + 1][j + 1] = board[i][j];
		}
	}
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			int sum = ret[i][j + 1] + ret[i + 2][j + 1] + ret[i + 1][j] + ret[i + 1][j + 2] + ret[i][j + 2] + ret[i][j] + ret[i + 2][j] + ret[i + 2][j + 2];
			if (ret[i + 1][j + 1] == 1)
			{
				if (sum < 2 || sum > 3)
				{
					board[i][j] = 0;
				}
				else
				{
					board[i][j] = 1;
				}
			}
			else{
				if (sum == 3)
				{
					board[i][j] = 1;
				}
				else
				{
					board[i][j] = 0;
				}
			}
		}
	}
}