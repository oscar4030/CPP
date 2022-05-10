#include <iostream>
using namespace std;
class Matrix {
	int arr[4];
public:
	Matrix() { for (int i = 0; i < 4; i++) arr[i] = 0; }
	Matrix(int a1, int a2, int b1, int b2) {
		arr[0] = a1; arr[1] = a2; arr[2] = b1; arr[3] = b2;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) cout << arr[i] << ' ';
		cout << "}" << endl;
	}
	friend void operator >> (Matrix& a, int x[]);
	friend void operator << (Matrix& b, int y[]);
};
void operator >> (Matrix& a, int x[]) {
	for (int i = 0; i < 4; i++) {
		x[i] = a.arr[i];
	}
}
void operator << (Matrix& b, int y[]) {
	for (int i = 0; i < 4; i++) {
		b.arr[i] = y[i];
	}
}
int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;
	for (int i = 0; i < 4; i++) {
		cout << x[i] << ' ';
	} cout << endl;
	b.show();
}



