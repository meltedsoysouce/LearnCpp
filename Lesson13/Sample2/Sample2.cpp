#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	Car(int n, double g);
	void show();
};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました。\n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "車を作成しました。\n";
	show();
}

void Car::show()
{
	cout << "ナンバーは" << num << "です。\n";
	cout << "ガソリン量は" << gas << "です。\n";
}

int main()
{
	Car car1;
	Car car2(1234, 20.5);

	return 0;
}