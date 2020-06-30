#define  _CRT_SECURE_NO_WARNINGS 1
#include<stack>
using std::stack;
class CQueue {
public:
	CQueue() {

	}

	void appendTail(int value) {
		sta1.push(value);
	}

	int deleteHead() {
		if (sta2.empty())
		{
			while (sta1.size())
			{
				sta2.push(sta1.top());
				sta1.pop();
			}
		}
		if (!sta2.empty())
		{
			int ret = sta2.top();
			sta2.pop();
			return ret;
		}
		return -1;
	}
private:
	stack<int> sta1;
	stack<int> sta2;
};