//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;
string  st2, st3;

int main() {
	cout << "输入密文：" << endl;
	getline(cin, st2);
	for (int i = 0; i < st2.size(); i++) {
		st3 += char(st2[i] - i);
	}
	cout << "将上面的密文解密后得到："  << st3 << endl;
	system("pause");
	return 0;
}
