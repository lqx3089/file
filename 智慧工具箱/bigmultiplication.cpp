//maker:Li Qixuan bigmultiplication
#include <bits/stdc++.h>
using namespace std;
string st1, st2;
int a[99999], b[99999], c[99999], len1, len2;

int main() {
	cout << "请输入乘数1" << endl;
	cin >> st1;
	cout << "请输入乘数2" << endl;
	cin >> st2;
	cout << "正在飞速计算中……" << endl;
	len1 = st1.size();
	len2 = st2.size();
	//倒叙存储开始
	for (int i = 0, j = len1; i < len1; i++, j--)
		a[j] = st1[i] - '0';
	for (int i = 0, j = len2; i < len2; i++, j--)
		b[j] = st2[i] - '0';



//	for (int i = 1; i <= len1; i++)
//		cout << a[i];
//	cout << endl;
//	for (int i = 1; i <= len2; i++)
//		cout << b[i];
//	cout << endl;



	//逐位相乘
	int maxlen = 0, jin = 0;
	maxlen = len1 + len2 - 1;
	for (int i = 1; i <= len1; i++) {
		for (int j = 1; j <= len2; j++) {
			c[i + j - 1] += a[i] * b[j];

		}
	}

//	for (int i = len1 + len2 - 1; i > 0; i--)
//		cout << c[i] << '+';
//	cout << endl;

	//薅羊毛（找进位）
	for (int i = 1; i <= maxlen; i++) {
		c[i] += jin;
		jin = c[i] / 10;
		c[i] = c[i] % 10;
	}
	cout << "它们的乘积是：";
	while (jin > 0) {
		maxlen++;
		c[maxlen] = jin % 10;
		jin = jin / 10;
	}
	for (int i = maxlen; i > 0; i--)
		cout << c[i];
	cout << endl;
	system("pause");
	return 0;
}
