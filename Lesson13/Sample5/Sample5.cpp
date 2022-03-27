#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car(int n=0, double g=0.0);
	void show();
};

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。\n";
}

void Car::show()
{
	cout << "ナンバーは" << num << "ガソリン量は" << gas << "です。\n";
}

int main()
{
	Car car1;
	Car car2(1234, 20.5);

	return 0;
}