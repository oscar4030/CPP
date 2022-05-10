#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " �� ��" << endl; }
	friend Circle operator +(int n, Circle a);
};
// n�� ��ü�� �ƴ϶� �ܺ��Լ� ����
Circle operator + (int n, Circle a) {
	Circle tmp;
	tmp.radius = n + a.radius;
	return tmp;
}
int main() {
	Circle a(5), b(4);
	b = 1 + a; // b�� �������� a�� �������� 1�� ���� ������ ����
	a.show();
	b.show();
}

