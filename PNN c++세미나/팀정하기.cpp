#include<iostream>
using namespace std;

class Team {
    int size;
public:
    Team(int team) { size = team; }
    int team() { return size; }
    void setName(int team) { size = team; }
    void show() { cout << "���������� " << team << "��" << size <<"�� �ֽ��ϴ�"<<endl; }
};
}
int main()
{
	int size;
	cout << "���� ���� ��� �����ðڽ��ϱ�?\n";

	cin >> size;
	Team team(size);

	team.setNames();
	team.show();
}