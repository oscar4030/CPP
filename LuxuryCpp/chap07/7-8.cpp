#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " �� ��" << endl; }
	Circle& operator ++(); // ���� ������
	Circle operator ++(int n); // ���� ������
};
Circle& Circle::operator ++() {
	radius++;
	return *this;
}
Circle Circle::operator ++(int n) {
	Circle tmp = *this; // ���� ���� ��ü ���¸� ����
	radius++;
	return tmp; // �����������̹Ƿ� ���� ���� ��ü ���� ����
}
int main() {
	Circle a(5), b(4);
	++a; // �������� 1 ���� ��Ų��
	b = a++; // �������� 1 ���� ��Ų��
	a.show();
	b.show();
}

