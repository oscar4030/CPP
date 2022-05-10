#include <iostream>
using namespace std;
class Color {
	int R, G, B;
public:
	Color() { R = 0, G = 0, B = 0; }
	Color(int R, int G, int B) { this->R = R, this->G = G, this->B = B; }
	void setColor(int R, int G, int B) { this->R = R, this->G = G, this->B = B; }
	void show() { cout << R << ' ' << G << ' ' << B << endl; }
	friend Color operator + (Color op1, Color op2);
	friend bool operator == (Color op1, Color op2);
};
Color operator + (Color op1, Color op2) {
	Color tmp;
	tmp.R = op1.R + op2.R;
	tmp.G = op1.G + op2.G;
	tmp.B = op1.B + op2.B;
	return tmp;
}
bool operator == (Color op1, Color op2) {
	if (op1.R == op2.R && op1.G == op2.G && op1.B == op2.B)
		return true;
	else return false;
}
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show(); 
	Color fuchsia(255, 0, 255); 
	if (c == fuchsia) cout << "보라색 맞음";
	else cout << "보라색 아님";
}

