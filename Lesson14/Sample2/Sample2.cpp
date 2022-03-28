#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	Car(int n, double g);
	void setCar(int n, double g);
	void show();
};

class RacingCar : public Car
{
private:
	int cource;
public:
	RacingCar();
	RacingCar(int n, double g, int c);
	void setCource(int c);
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

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "ガソリン量を" << gas << "にしました。\n";
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

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
	cource = c;
	cout << "コース番号" << cource << "のレーシングカーを作成しました。\n";
}

void RacingCar::setCource(int c)
{
	cource = c;
	cout << "コース番号を" << cource << "にしました。\n";
}

int main()
{
	RacingCar rccar1(1234, 20.5, 5);

	return 0;
}