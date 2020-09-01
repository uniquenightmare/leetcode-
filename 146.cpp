#define  _CRT_SECURE_NO_WARNINGS 1
struct DListNode
{
	int val, key;
	DListNode* pre;
	DListNode* next;
	DListNode()
		:val(0)
		, key(0)
		, pre(nullptr)
		, next(nullptr)
	{}
	DListNode(int _key, int _val)
		:val(_val)
		, key(_key)
		, pre(nullptr)
		, next(nullptr)
	{}
};
class LRUCache {
public:

	LRUCache(int capacity)
		:_capacity(capacity)
		, _size(0)
	{
		head = new DListNode();
		tail = new DListNode();
		head->next = tail;
		tail->pre = head;
	}

	int get(int key) {
		if (!mp.count(key))
		{
			return -1;
		}
		movehead(mp[key]);
		return mp[key]->val;
	}

	void put(int key, int value) {
		if (!mp.count(key))
		{
			DListNode* node = new DListNode(key, value);
			mp[key] = node;
			addhead(node);
			_size++;
			if (_size > _capacity)
			{

				DListNode* removed = removeTail();
				// 删除哈希表中对应的项
				mp.erase(removed->key);
				// 防止内存泄漏
				delete removed;
				--_size;
			}
		}
		else
		{
			DListNode* node = mp[key];
			node->val = value;
			movehead(node);
		}
	}
	void rmnode(DListNode* node)
	{
		node->pre->next = node->next;
		node->next->pre = node->pre;
	}
	void addhead(DListNode* node)
	{
		node->pre = head;
		node->next = head->next;
		head->next->pre = node;
		head->next = node;
	}
	void movehead(DListNode* node)
	{
		rmnode(node);
		addhead(node);
	}
	DListNode* removeTail() {
		DListNode* node = tail->pre;
		rmnode(node);
		return node;
	}
private:
	DListNode* head;
	DListNode* tail;
	unordered_map<int, DListNode*> mp;
	int _size;
	int _capacity;
};