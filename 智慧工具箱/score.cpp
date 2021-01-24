//maker:Li Qixuan score
#include <bits/stdc++.h>
using namespace std;
double a[1001];
int n, xh;
double  cj, s;
ofstream fout;
ofstream fout2, fout3, fout4;

int main() {
	cout << "请输入人数（多少个成绩需要整理）" << endl;
	cin >> n;
	fout.open("输入备份.txt");
	fout2.open("输出数据带学号.txt");
	fout3.open("输出数据不带学号.txt");
	fout4.open("学生总成绩和品均分.txt");
	for (int i = 1; i <= n; i++) {
		cout << "学号：";
		cin >> xh;
		cout << "分数：";
		cin >> cj;
		a[xh] = cj;
		fout << xh << ' ' << cj << endl;
		s += cj;
	}
	fout << flush;
	fout.close();
	for (int i = 1; i <= n; i++) {
		cout << "学号：" << i << "  分数：" << a[i] << endl;
		fout2 << i << ' ' << a[i] << endl;
		fout3 << a[i] << endl;
	}
	fout4 << "总计" << s << "分" << endl << "平均" << s / n << "分" << endl;
	fout2 << flush;
	fout2.close();
	fout3 << flush;
	fout3.close();
	fout4 << flush;
	fout4.close();
	system("pause");
	return 0;
}
