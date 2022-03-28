#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	void setCar(int n, double g);
	void show();
};

class RacingCar : public Car {
private:
	int cource;
public:
	RacingCar();
	void setCource(int c);
};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました。\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "ガソリン量を" << gas << "に設定しました。\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です。\n";
	cout << "ガソリン量は" << gas << "です。\n";
}

RacingCar::RacingCar()
{
	cource = 0;
	cout << "レーシングカーを作成しました。\n";
}

void RacingCar::setCource(int c)
{
	cource = c;
	cout << "コース番号を" << cource << "にしました。\n";
}

int main()
{
	RacingCar rccar1;
	rccar1.setCar(1234, 20.5);
	rccar1.setCource(5);

	return 0;
}