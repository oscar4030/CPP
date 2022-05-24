#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NameCircle : public Circle {
	string name;
public:
	void setRN(int R, string N) {
		setRadius(R);
		this->name = N;
	}
	string getName() { return name; }
};
int main() {
	string name;
	int radius, big;
	double size[5];
	NameCircle pizza[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요\n";
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRN(radius, name);
		size[i] = pizza[i].getArea();
	}
	big = 0;
	for (int i = 0; i < 4; i++) {
		if (size[i] < size[i + 1])
			big = i + 1;
	}
	cout << "가장 면적이 큰 피자는 " << pizza[big].getName() << "입니다";
}