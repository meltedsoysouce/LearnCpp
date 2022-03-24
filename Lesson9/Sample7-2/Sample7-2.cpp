#include <iostream>
using namespace std;

double avg(int* pT);

int main()
{
	int test[5];

	cout << "5人のテストの点数を入力してください。\n";
	for (int i = 0; i < 5; i++)
		cin >> test[i];

	double ans = avg(test);

	cout << "5人の平均点は" << ans << "です。\n";
}

double avg(int* pT)
{
	double sum = 0;
	for (int i = 0; i < 5; i++)
		sum += *(pT + i);

	return sum / 5;
}