#define  _CRT_SECURE_NO_WARNINGS 1
int strStr(string haystack, string needle) {
	if (needle == "") return 0;
	int i = 0;
	int j = 0;
	int n = haystack.size();
	int m = needle.size();
	int start = -1;
	while (i<n&&j<m){
		if (haystack[i] == needle[j]){
			if (start<0) start = i;
			i++;
			j++;
		}
		else{
			if (start >= 0){
				j = 0;
				i = start + 1;   //»ØÍË
			}
			else{
				i++;
			}
			start = -1;
		}
	}

	if (j == m) return start;
	return -1;

}