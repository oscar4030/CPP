#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;

	cout << "�� ���� �Է��϶� : ";
	cin >> num1 >> num2;

	if (num1 == num2) {
		cout << "�� ���� �����ϴ�";
	}
	if (num1 > num2) {
		cout << "ū �� = " << num1;
	}
	else if (num1 < num2) {
		cout << "ū �� = " << num2;
	}

	return 0;
}