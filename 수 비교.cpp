#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;

	cout << "두 수를 입력하라 : ";
	cin >> num1 >> num2;

	if (num1 == num2) {
		cout << "두 수가 같습니다";
	}
	if (num1 > num2) {
		cout << "큰 수 = " << num1;
	}
	else if (num1 < num2) {
		cout << "큰 수 = " << num2;
	}

	return 0;
}