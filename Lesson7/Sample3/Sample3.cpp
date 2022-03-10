#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "万円の車を買いました。\n";
}

int main()
{
	buy(20);
	buy(50);

	return 0;
}