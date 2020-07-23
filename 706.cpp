#define  _CRT_SECURE_NO_WARNINGS 1
class MyHashMap {
public:
	/** Initialize your data structure here. */
	MyHashMap() {
		mp.resize(10);
		capcity = 0;
	}

	/** value will always be non-negative. */
	void put(int key, int value) {
		int idx = key % mp.size();
		mp[idx][key] = value;
	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key) {
		int idx = key % mp.size();
		if (mp[idx].count(key))
		{
			return mp[idx][key];
		}
		return -1;
	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key) {
		int idx = key % mp.size();
		mp[idx].erase(key);
	}
private:
	vector<map<int, int>> mp;
	int capcity;
};