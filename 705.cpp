#define  _CRT_SECURE_NO_WARNINGS 1
class MyHashSet {
public:
	/** Initialize your data structure here. */
	MyHashSet()
		:_capacity(0)
	{
		vec.clear();
		vec.resize(10);
	}
	void add(int key) {
		int idx = key % vec.size();
		vec[idx].insert(key);
	}

	void remove(int key) {
		int idx = key % vec.size();
		vec[idx].erase(key);
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		int idx = key % vec.size();
		if (vec[idx].count(key) != 0)
		{
			return true;
		}
		return false;
	}
private:
	vector<set<int>> vec;
	int _capacity;
};
