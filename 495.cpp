#define  _CRT_SECURE_NO_WARNINGS 1
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
	int ret = 0;
	if (timeSeries.empty()) return 0;
	for (int i = 1; i < timeSeries.size(); i++)
	{
		if (timeSeries[i - 1] + duration - 1 < timeSeries[i])
		{
			ret += duration;
		}
		else
		{
			ret += timeSeries[i] - timeSeries[i - 1];
		}
	}
	ret += duration;
	return ret;
}