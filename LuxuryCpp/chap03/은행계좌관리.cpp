#include<iostream>

#include<string.h>

using namespace std;



class Account

{

	string name;

	int id, balance;

public:

	Account();

	Account(string a, int b, int c);

	string getOwner();

	void deposit(int a);

	int withdraw(int b);

	int inquiry();



};

Account::Account()

{



}

Account::Account(string a, int b, int c)

{

	name = a;

	id = b;

	balance = c;

}

void Account::deposit(int a)

{

	balance += a;

}

string Account::getOwner()

{

	return name;

}

int Account::withdraw(int b)

{

	balance -= b;

	return balance;

}

int Account::inquiry()

{

	return balance;

}





int main()

{

	Account a("kitae", 1, 5000);

	a.deposit(50000);

	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	int money = a.withdraw(20000);

	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

}