#include <iostream>
using namespace std;

void buy(int x = 10);

int main()
{
	cout << "1回目は100万円で購入します。\n";
	buy(100);

	cout << "2回目はデフォルト金額で購入します。\n";
	buy();

	return 0;
}

void buy(int x)
{
	cout << x << "万円の車を買いました。\n";
}