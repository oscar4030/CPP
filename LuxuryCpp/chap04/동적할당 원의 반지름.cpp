#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius = 0;
public:
	Circle() {};
	~Circle() {};
	void setRadius(int x);
	double getArea();
};

void Circle::setRadius(int x)
{
	radius = x;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	int cn;
	cout << "원의 개수 >>";
	cin >> cn;
	Circle* p = new Circle[cn];
	int n, cnt = 0;

	for (int i = 0; i < cn; i++)
	{
		cout << "원" << i + 1 << "의 반지름 >>";
		cin >> n;
		p[i].setRadius(n);
		if (p[i].getArea() > 100) cnt++;
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
}