#include<iostream>
using namespace std;

class Team {
    int size;
public:
    Team(int team) { size = team; }
    int team() { return size; }
    void setName(int team) { size = team; }
    void show() { cout << "저희팀에는 " << team << "로" << size <<"이 있습니다"<<endl; }
};
}
int main()
{
	int size;
	cout << "저희 팀에 몇명 넣으시겠습니까?\n";

	cin >> size;
	Team team(size);

	team.setNames();
	team.show();
}