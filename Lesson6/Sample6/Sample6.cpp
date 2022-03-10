#include <iostream>
using namespace std;

int main()
{
	int num = 1;

	while (num)
	{
		cout << "整数を入力してください。(0で終了)\n";
		cin >> num;
		cout << num << "が入力されました。\n";
	}

	cout << "繰り越しが終わりました。\n";

	return 0;
}