#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
#include "Mystring.h"
using namespace std;
//测试数据
int main() {
	Mystring a = "abc";
	Mystring b = "bca";
	Mystring c(a);
	Mystring d;
	Mystring x;
	Mystring y[2];
	//x=a+"bca";
	x.operator+=("nb" + a);
	y[0].operator=(x);
	y[1].operator=("jkl");
	d = b;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << x << endl;
	cout << y[0] << endl;
	cout << y[1] << endl;
	if (y[0] == x) {
		cout << "good job1" << endl;
	}
	if (x == "nbabc") {
		cout << "good job2" << endl;
	}
	if (a != b) {
		cout << "good job3" << endl;
	}
	//栈中实例化析构函数自动调用
	//a.~Mystring();
	//b.~Mystring();
	//c.~Mystring();
	//d.~Mystring();
	//x.~Mystring();
	system("pause");
	return 0;
}
//}