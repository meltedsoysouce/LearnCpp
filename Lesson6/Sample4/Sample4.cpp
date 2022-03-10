#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;

	cout << "いくつまでの合計を求めますか？\n";

	cin >> num;

	for (int i = 0; i < num; i++)
		sum += i+1;

	cout << "1から" << num << "までの合計は" << sum << "です。\n";

	return 0;
}