#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;

	while (true) {
		cout << ">>";
		getline(cin, str);

		if (str == "exit") break;

		int lenght = str.length();

		for (int i = (lenght - 1); i >= 0; i--) cout << str[i];
		cout << endl;
	}
}