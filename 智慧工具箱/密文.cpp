//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;
string st1, st2, st3;

int main() {
	cout << "提示：如果加密完成后没有出现解析结果预览，说明这段文本无法直接加密，本次加密失败。";
	cout << "你可以把它分段加密后发给你的朋友，如果你执意要使用加密失败的密文会导致解析失败。" << endl;
	cout << "输入待加密文字：" << endl;
	getline(cin, st1);
	cout << "原文长度：" << st1.size() << endl;
	for (int i = 0; i < st1.size(); i++) {
		st2 += char(st1[i] + i);
	}
	cout << "密文长度：" << st2.size() << endl;
	cout << "密文：" << st2 << endl;
	for (int i = 0; i < st2.size(); i++) {
		st3 += char(st2[i] - i);
	}
	if (st3 != st1)
		cout << "Error. can not encrypt or parse!Please contact lqx3089@outlook.com." << endl;
	cout << "解析后长度：" << st3.size() << endl << "（应当等于原文长度，否则代表加密失败，请和lqx3089@outlook.com联系）" <<
	     endl ;
	cout << "将上面的密文解密后得到："  << st3 << endl  <<
	     "（应当等于原文，否则代表加密失败，请和lqx3089@outlook.com联系" << endl;
	system("pause");
	return 0;
}
