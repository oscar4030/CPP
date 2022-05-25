#include <iostream>
#include <string>
using namespace std;

class LoopAdder { // �߻� Ŭ���� 
	string name; // ������ �̸� 
	int x, y, sum; // x���� y������ ���� sum 
	void read(); // x, y ���� �о� ���̴� �Լ� 
	void write(); // sum�� ����ϴ� �Լ� 
protected:
	LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� "" 
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���� ���� ���ϴ� �Լ� 
public:
	void run(); // ������ �����ϴ� �Լ� 
};

void LoopAdder::read() { // x, y �Է� 
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���Ѵ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAdder::write() { // ��� sum ��� 
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
	read(); // x, y�� �д´� 
	sum = calculate(); // ������ ���鼭 ����Ѵ�. 
	write(); // ��� sum�� ����Ѵ�. 
}
class ForLoopAdder : public LoopAdder {
	string str;
public:
	ForLoopAdder(string str = "") : LoopAdder(str) { this->str = str; }
	virtual int calculate() {
		int sum = 0;
		int x = getX();
		int y = getY();
		for (; x <= y; x++) sum += x;
		return sum;
	}
};
int main() {
	ForLoopAdder ForLoop("For Loop");
	ForLoop.run();
}