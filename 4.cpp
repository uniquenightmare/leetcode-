#define  _CRT_SECURE_NO_WARNINGS 1
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	priority_queue<int> myque;
	vector<int>ret;
	for (auto & ch : nums1)
	{
		myque.push(ch);
	}
	for (auto & ch : nums2)
	{
		myque.push(ch);
	}
	while (myque.size())
	{
		ret.push_back(myque.top());
		myque.pop();
	}
	int size = ret.size();
	if (size % 2 == 0)
	{
		return ((double)(ret[size / 2] + ret[size / 2 - 1])) / 2;
	}
	return ret[size / 2];

}