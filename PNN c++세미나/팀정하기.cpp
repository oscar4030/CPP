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
	{ cout << "저희팀에는 " << a[i] << "로" << size << "이 있습니다" << endl; } 
	}
};
int main()
{
	int size;
	cout << "저희 팀에 몇명 넣으시겠습니까?\n";

	cin >> size;
	Team team(size);

	team.setName();
	team.show();
}