#include <string>;
#include <iostream>
using namespace std;

// 菜单
//但是?
void showMenu() {

	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
}

int main()
{
	showMenu();
	system("pause");
	return 0;
}