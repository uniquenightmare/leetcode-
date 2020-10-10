#define  _CRT_SECURE_NO_WARNINGS 1
string complexNumberMultiply(string a, string b) {
	int a1, b1, a2, b2;
	int r1, r2;
	char t;
	stringstream ss1(a);
	stringstream ss2(b);
	ss1 >> a1 >> t >> b1;
	ss2 >> a2 >> t >> b2;

	r1 = a1*a2 - b1*b2;
	r2 = a1*b2 + a2*b1;
	return to_string(r1) + "+" + to_string(r2) + "i";

}