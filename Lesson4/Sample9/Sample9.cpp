﻿#include <iostream>
using namespace std;

int main()
{
	double dnum = 160.5;
	int inum;

	cout << "身長は" << dnum << "センチです。\n";
	cout << "int型の変数に代入します。\n";

	inum = dnum;

	cout << "身長は" << inum << "です。\n";

	return 0;
}