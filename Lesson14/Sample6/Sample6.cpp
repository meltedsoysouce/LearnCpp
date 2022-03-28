#include <iostream>
using namespace std;

class Vehicle {
protected:
	int speed;
public:
	void setSpeed(int s);
	virtual void show() = 0;
};

class Car : public Vehicle 
{
private:
	int num;
	double gas;
public:
	Car(int n, double gas);
	void show();
};

class Plane : public Vehicle
{
private:
	int flight;
public:
	Plane(int f);
	void show();
};

void Vehicle::setSpeed(int s)
{
	speed = s;
	cout << "速度を" << speed << "にしました。\n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です。\n";
	cout << "ガソリン量は" << gas << "です。\n";
	cout << "速度は" << speed << "です。\n";
}

Plane::Plane(int f)
{
	flight = f;
	cout << "便" << flight << "の飛行機を作成しました。\n";
}

void Plane::show()
{
	cout << "飛行機の便は" << flight << "です。\n";
	cout << "速度は" << speed << "です。\n";
}

int main()
{
	Vehicle* pVs[2];

	Car car1(1234, 20.5);
	pVs[0] = &car1;
	pVs[0]->setSpeed(60);

	Plane pln1(232);
	pVs[1] = &pln1;
	pVs[1]->setSpeed(500);

	for (int i = 0; i < 2; i++)
		pVs[i]->show();
}