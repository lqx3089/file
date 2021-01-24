//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入第二个数" << endl;
	cin >> b;
	if (a == 1 || b == 1) {
		cout << "警告：1不参与计算！";
		return -1;
	}
	cout << "请稍后，正在计算" << endl;
	int bcs, cs, ys;
	bcs = a;
	cs = b;
	ys = 0;
	while (cs != 0) {
		ys = bcs % cs;
		bcs = cs;
		cs = ys;

	}
	cout << "它们的公因数是：" << bcs << endl;
	system("pause");
	return 0;
}
