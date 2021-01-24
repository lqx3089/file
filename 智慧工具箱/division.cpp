//maker:Li Qixuan division
#include <bits/stdc++.h>
using namespace std;
double at, bt;
int a, b, c[9999999];
long long z, xa, clen;
ofstream fout("高精度除法.txt");

int main() {
	cout << "请输入被除数，然后空格或回车，然后输入除数（被除数和除数都只支持正整数）" << endl;
	cin >> at >> bt;
	a = at;
	b = bt;
	cout << "数据接收成功！" << "被除数：" << a << "除数：" << b << endl;
	system("pause");
	cout << "正在计算……" << endl;
	z = a / b;
	xa = a % b * 10;
	while (xa > 0 && clen < 50001) {
		clen++;
		c[clen] = xa / b;
		xa = xa % b * 10;
		if (clen == 1000) {
			cout << "数据已达小数点后1000位，是否继续？是1，否2" << endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
		if (clen == 5000) {
			cout << "数据已达小数点后5000位，是否继续？是1，否2" << endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
		if (clen == 10000) {
			cout << "数据已达小数点后10000位，是否继续？是1，否2" << endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
		if (clen == 20000) {
			cout << "数据已达小数点后20000位，是否继续？是1，否2（这是最后一次提示，如果是无限小数，会在约50000位时结束运算！）" <<
			     endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
	}
	cout << "结果是：" << endl;
	cout << z ;
	fout << z;
	if (clen > 0)
		cout << '.';
	fout << '.';
	for (int i = 1; i <= clen; i++) {
		cout << c[i];
		fout << c[i];
	}
	return 0;
}
