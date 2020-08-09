#define  _CRT_SECURE_NO_WARNINGS 1
int superPow(int a, vector<int>& b) {
	int size = b.size();
	int x = a % 1337;
	int res = 1;
	for (int i = size - 1; i >= 0; i--) {
		int pow = b[i];
		res = (res * qpow(x, pow)) % 1337;
		x = qpow(x, 10) % 1337;
	}
	return res;
}

int qpow(int x, int n) {
	int res = 1;
	while (n) {
		if (n & 1) {
			res = (res * x) % 1337;
		}
		x = (x * x) % 1337;
		n >>= 1;
	}
	return res;
}