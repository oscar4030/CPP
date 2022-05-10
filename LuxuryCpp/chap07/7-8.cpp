#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	Circle& operator ++(); // 전위 연산자
	Circle operator ++(int n); // 후위 연산자
};
Circle& Circle::operator ++() {
	radius++;
	return *this;
}
Circle Circle::operator ++(int n) {
	Circle tmp = *this; // 증가 이전 객체 상태를 저장
	radius++;
	return tmp; // 후위연산자이므로 증가 이전 객체 상태 리턴
}
int main() {
	Circle a(5), b(4);
	++a; // 반지름을 1 증가 시킨다
	b = a++; // 반지름을 1 증가 시킨다
	a.show();
	b.show();
}

