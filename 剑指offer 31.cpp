#define  _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<stack>
using namespace std;
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
	stack<int> st;
	int n = popped.size();
	int j = 0;
	for (int i = 0; i < pushed.size(); ++i){
		st.push(pushed[i]);
		while (!st.empty() && j < n && st.top() == popped[j]){
			st.pop();
			++j;
		}
	}
	return st.empty();
}