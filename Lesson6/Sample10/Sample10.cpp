#include <iostream>

using namespace std;

int main()
{
	int res;

	cout << "2何番目でループを中止しますか？\n";

	cin >> res;

	for (int i = 0; i < 10; i++)
	{
		cout << i << "番目の処理です。\n";
		if (res == i)
			break;
	}

	return 0;
}