#include <iostream>
#include <string>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3]; //tong[0] = coffee, tong[1] = water, tong[2] = sugar
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
		show();
	}
	void selectEspresso() {
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
	void selectAmericano() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
	void selectSugarCoffee() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
	void show() {
		cout << "Ŀ�� " << tong[0].getSize() << " �� " << tong[1].getSize() << " ���� " << tong[2].getSize() << endl;
	}
public:
	void run() {
		int choice;
		cout << "***** Ŀ�� ���Ǳ⸦ �۵��մϴ�. *****" << endl;
		while (true) {
			if (tong[0].getSize() == 0) { cout << "���ᰡ �����մϴ�." << endl; break; }
			else if (tong[1].getSize() == 0) { cout << "���ᰡ �����մϴ�." << endl; break; }
			else if (tong[2].getSize() == 0) { cout << "���ᰡ �����մϴ�." << endl; break; }
			else {
				cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>>";
				cin >> choice;
				if (choice == 1) { selectEspresso(); continue; }
				else if (choice == 2) { selectAmericano(); continue; }
				else if (choice == 3) { selectSugarCoffee(); continue; }
				else if (choice == 4) { show(); continue; }
				else if (choice == 5) { fill(); continue; }
				else cout << "�ùٸ� ��ɾ �ƴմϴ�." << endl;
			}
		}
	}
};

int main() {
	CoffeeVendingMachine cm;
	cm.run();
}