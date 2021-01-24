#include <bits/stdc++.h>
using namespace std;

void tuichu() {
	cout << "请按任意键确认退出" << endl;
	system("pause");
	cout << "正在清除临时存储" << endl;
	cout << "正在清理out流" << endl;
	cout << endl << endl;
	cout << "正在退出函数并关闭引擎" << endl;
	cout << endl << endl;
}

int main() {
	cout << "正在加载，请稍后……" << endl << "正在处理程序标题数据……" << endl;
	system("title 智慧工具箱 由创客中心提供技术支持");
	cout << "欢迎使用智慧工具箱" << endl;
	for (;;) {
		int z;
		cout << endl << endl << "输入工具代码并回车" << endl << "日常使用工具：" << endl;

		cout << "1：长方体或正方体的体积 2：两个数的最大公因数 3：计算长方体或正方体的表面积" << endl << endl;

		cout << "特殊工具：" << endl << endl << "4：大数乘法" << endl;
		cout << "支持处理两个巨大的数相乘，可以保证7000位乘以7000位的数据准确！（仅支持正整数）" << endl;
		cout << "5：分数排序" << endl << "可以乱序输入学号和成绩，会按学号正序输出排序结果" << endl;
		cout << "如：输入3回车 87回车 1回车 99回车 2回车 46回车 会输出1 99回车 2 46回车 3 87回车" << endl;
		cout << "并将您的输入和输出备份至文件夹下的txt文件中" << endl;
		cout << "6：圆柱体表面积" << endl << "如果您知道高和直径，请启动程序后输入1，如果您知道半径，请输入2" << endl;
		cout << endl << endl << " -1:退出" << endl;

		cout << "请严格按照要求输入，否则程序将会奔溃！！！" << endl;
		cout << "如遇程序奔溃或死循环，请强制关闭程序重新打开" << endl;

		cin >> z;
		if (z == 1)
			system("volume.exe");
		else if (z == 2)
			system("gys.exe");
		else if (z == 3)
			system("acreage.exe");
		else if (z == 4)
			system("bigmultiplication.exe");
		else if (z == 5)
			system("score.exe");
		else if (z == -1) {
			z = 0;
			break;
		} else if (z == 6) {
			system("sz");
		} else if (z == -2) {
			system("CLS");
		}
		system("CLS");
	}
	tuichu();
	return 0;
}