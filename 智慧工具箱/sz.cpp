//maker:Li Qixuan //sz
#include <bits/stdc++.h>
using namespace std;
double r, d, h;
int m;

int main() {
	cout << "如果您知道高和直径，请输入1，如果您知道高和半径，请输入2" << endl;
	cin >> m;
	if (m == 1) {
		cout << "请输入直径" << endl;
		cin >> d;
		r = d / 2;
	} else {
		cout << "请输入半径" << endl;
		cin >> r;
		d = r * 2;
	}
	cout << "请输入高" << endl;
	cin >> h;
	if (h == 0 || r == 0 || d == 0) {
		cerr << "警告！计算时任何数据都不应该为0！程序异常退出！" << endl;
		system("pause");
		return -1;
	}
	cout << "这个圆柱的表面积是：" << d * 3.14 * h + r *r * 3.14 * 2 << endl;
	system("pause");
	return 0;
}
