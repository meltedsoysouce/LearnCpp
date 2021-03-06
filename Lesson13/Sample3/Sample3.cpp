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
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。\n";
}

void Car::show()
{
	cout << "ナンバーは" << num << "ガソリン量は" << gas << "です。\n";
}

int main()
{
	Car mycars[3] = {
		Car(),
		Car(1234, 20.5),
		Car(4567, 52.2)
	};

	return 0;
}