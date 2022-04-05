#include <iostream>
#include <string>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}
int Sample::big() {
	int max = p[0];
	for (int i = 0; i < size; i++) {
		if (max < p[i + 1]) {
			max = p[i + 1];
		}
	}
	return max;
}
Sample::~Sample() {}


int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장큰수는 " << s.big() << endl;
}