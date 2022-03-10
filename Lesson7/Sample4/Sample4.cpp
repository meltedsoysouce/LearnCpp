#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "万円の車を買いました。\n";
}

int main()
{
	int num;

	cout << "1台目はいくらの車を買いますか？\n";
	cin >> num;

	buy(num);

	cout << "2台目はいくらの車を買いますか？\n";
	cin >> num;

	buy(num);

	return 0;
}