#include<iostream>
using namespace std;

class Team {
    int size;
	string *a;
public:
	Team() { }
	Team(int size) { this->size = size;a = new string[size];
	}
	void setName() 
	{
		for (int i = 0; i < size; i++) { cin >> a[i]; }
	}
	void show() { for (int i = 0; i < size; i++)
	{ cout << "���������� " << a[i] << "��" << size << "�� �ֽ��ϴ�" << endl; } 
	}
};
int main()
{
	int size;
	cout << "���� ���� ��� �����ðڽ��ϱ�?\n";

	cin >> size;
	Team team(size);

	team.setName();
	team.show();
}