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
		cout << "에스프레소 드세요" << endl;
	}
	void selectAmericano() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "아메리카노 드세요" << endl;
	}
	void selectSugarCoffee() {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 드세요" << endl;
	}
	void show() {
		cout << "커피 " << tong[0].getSize() << " 물 " << tong[1].getSize() << " 설탕 " << tong[2].getSize() << endl;
	}
public:
	void run() {
		int choice;
		cout << "***** 커피 자판기를 작동합니다. *****" << endl;
		while (true) {
			if (tong[0].getSize() == 0) { cout << "원료가 부족합니다." << endl; break; }
			else if (tong[1].getSize() == 0) { cout << "원료가 부족합니다." << endl; break; }
			else if (tong[2].getSize() == 0) { cout << "원료가 부족합니다." << endl; break; }
			else {
				cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
				cin >> choice;
				if (choice == 1) { selectEspresso(); continue; }
				else if (choice == 2) { selectAmericano(); continue; }
				else if (choice == 3) { selectSugarCoffee(); continue; }
				else if (choice == 4) { show(); continue; }
				else if (choice == 5) { fill(); continue; }
				else cout << "올바른 명령어가 아닙니다." << endl;
			}
		}
	}
};

int main() {
	CoffeeVendingMachine cm;
	cm.run();
}