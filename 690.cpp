#define  _CRT_SECURE_NO_WARNINGS 1
class Solution {
	unordered_map<int, Employee*> mp;
	int ans = 0;
public:
	int getImportance(vector<Employee*> employees, int id) {
		for (auto& e : employees)
			mp[e->id] = e;
		dfs(id);
		return ans;
	}

	void dfs(int id) {
		ans += mp[id]->importance;
		for (int i = 0; i < mp[id]->subordinates.size(); ++i)
			dfs(mp[id]->subordinates[i]);
	}
};

