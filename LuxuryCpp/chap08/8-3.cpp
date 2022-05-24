#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x, int y, string color) :Point(x, y) { this->color = color; }
	int setPoint(int x, int y) { return x, y; }
	void setColor(string color) { this->color = color; }
	void show() { cout << color << "������ (" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl; }
};

int main() {
	ColorPoint cp(10, 20, "RED");
	cp.setPoint(5, 5);
	cp.setColor("BLUE");
	cp.show();
}