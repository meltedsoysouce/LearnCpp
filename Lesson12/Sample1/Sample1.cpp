#include <iostream>
using namespace std;

class Car {
public:
	int num;
	double gas;
	void show();
};

// クラスメンバ関数の定義
void Car::show()
{
	cout << "車のナンバーは" << num << "です。\n";
	cout << "ガソリン量は" << gas << "です。\n";
}

int main()
{
	Car car1;

	car1.num = 1234;
	car1.gas = 20.5;

	car1.show();

	return 0;
}