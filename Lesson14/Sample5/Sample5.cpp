#include <iostream>
using namespace std;

class Car {
protected:
	int num;
	double gas;
public:
	Car();
	void setCar(int n, double g);
	virtual void show();
};

class RacingCar : public Car
{
private:
	int cource;
public:
	RacingCar();
	void setCource(int c);
	void show();
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

void RacingCar::setCource(int c)
{
	cource = c;
	cout << "コース番号を" << cource << "にしました。\n";
}

void RacingCar::show()
{
	cout << "レーシングカーのナンバーは" << num << "です。\n";
	cout << "ガソリン量は" << gas << "です。\n";
	cout << "コース番号は" << cource << "です。\n";
}

int main()
{
	Car* pCars[2];

	Car car1;
	RacingCar rccar1;

	pCars[0] = &car1;
	pCars[0]->setCar(1234, 20.5);

	pCars[1] = &rccar1;
	pCars[1]->setCar(4567, 30.5);

	for (int i = 0; i < 2; i++)
		pCars[i]->show();

	return 0;
}