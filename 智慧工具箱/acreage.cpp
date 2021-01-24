//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, h;
	cout << "请输入长" << endl;
	cin >> a;
	cout << "请输入宽" << endl;
	cin >> b;
	cout << "请输入高" << endl;
	cin >> h;
	cout << "表面积是：" << (a + b)*h + a *b * 2 << "   计算公式为(a+b)*h+a*b*2" << endl;
	system("pause");
	return 0;
}
