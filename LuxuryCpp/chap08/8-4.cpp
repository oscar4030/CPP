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
	ColorPoint(int x = 0, int y = 0, string color = "BLACK") :Point(x, y) { this->color = color; }
	int setPoint(int x = 0, int y = 0) { return x, y; }
	void setColor(string color = "BLACK") { this->color = color; }
	void show() { cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << endl; }
};

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();
	ColorPoint cp(10, 20);
	cp.setPoint(5, 5);
	cp.setColor("BLUE");
	cp.show();
}