#include <iostream>
using namespace std;

void func();

int a = 0;

int main()
{
	int b = 1;

	cout << "main関数では変数aとbが使えます。\n";
	cout << "変数aの値は" << a << "です。\n";
	cout << "変数bの値は" << b << "です。\n";
	
	func();

	return 0;
}

void func()
{
	int c = 3;

	cout << "func関数では変数aとcが使えます。\n";
	cout << "変数aの値は" << a << "です。\n";
	cout << "変数cの値は" << c << "です。\n";
}