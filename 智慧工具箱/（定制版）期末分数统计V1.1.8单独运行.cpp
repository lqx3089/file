//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;
int a[10002][10005];
int n, m;
ofstream fout1("in.txt"), fout2("out.txt");

void in() {
	int temp = 0;
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		fout1 << temp << ' ';
		for (int j = 2; j <= m + 1; j++) {
			cin >> a[temp][j];
			fout1 << a[temp][j] << ' ';
		}
		a[temp][1] = temp;
		fout1 << endl;
	}
}

void add() {
	int tmp = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= m + 1; j++) {
			tmp += a[i][j];
		}
		a[i][m + 2] = tmp;
		tmp = 0;
	}
}

void out() {
	for (int i = 1; i <= n; i++) {
		cout << setw(4) << i;
		fout2 << i << ' ';
		for (int j = 2; j <= m + 2; j++) {
			cout << setw(9) << a[i][j];
			fout2 << a[i][j] << ' ';
		}
		cout << endl;
		fout2 << endl;
	}
	cout << setw(4) << "总计";
	for (int j = 2; j <= m + 2; j++) {
		cout << setw(9) << a[n + 1][j];
		fout2 << a[n + 1][j];
	}
}

void endadd() {
	int tmp = 0;
	for (int j = 2; j <= m + 2; j++) {
		for (int i = 1; i <= n; i++) {
			tmp += a[i][j];
		}
		a[n + 1][j] = tmp;
		tmp = 0;
	}
}

int main() {
	cout << "欢迎使用！制作者：李启轩 反馈邮箱：lqx3089@outlook.com" << endl;
	cout << "官方网站：https://wlcx.cn1.utools.club/" << endl;
	cout << "请输入学生人数和学科数" << endl;
	cin >> n >> m;
	cout << "输入成功！请按下面的规则继续输入。" << endl;
	cout << "请先输入学号，然后空格，然后输入各科分数，每个分数之间用空格隔开。" << endl;
	cout << "一行一条数据" << endl;
	in();
	add();
	endadd();
	cout << "学号  ";
	for (int i = 1; i <= m; i++) {
		cout << "科目：" << i << "  ";
	}
	cout << "总分：" << endl;
	cout << "=============================================" << endl;
	out();
	cout << endl;
	system("pause");
	return 0;
}
