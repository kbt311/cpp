#include <iostream>
#include <string>
using namespace std;
int a[10000] = { 0 };
int b[10000] = { 0 };
int c[11000] = { 0 };

int main() {
	string num1, num2;
	cin >> num1 >> num2;
	int len1 = num1.size();
	int len2 = num2.size();
	int maxlen = (len1 > len2) ? len1 : len2;
	for (int i = 0;i < len1;i++) {
		a[i] = num1[len1 - 1 - i] - '0';
	}
	for (int i = 0;i < len2;i++) {
		b[i] = num2[len2 - 1 - i] - '0';
	}
	for (int i = 0;i < maxlen;i++) {
		c[i] += (a[i] + b[i]);
		if (c[i] >= 10) {
			c[i + 1] += (c[i] / 10);
			c[i] %= 10;
		}
	}
	int i = maxlen;
	while (i >= 0 && c[i] == 0) i--;
	if (i < 0) cout << "0" << endl;
	for (;i >= 0;i--) {
		cout << c[i] << "";
	}
	return 0;
}