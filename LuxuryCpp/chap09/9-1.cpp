#include <iostream>
#include <string>
using namespace std;

class Converter {
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "��  " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ��� >> ";
		cin >> src;
		cout << "��ȯ ���: " << convert(src) << getDestString() << endl;
	}
};
class WonToDollar : public Converter {
	int won;
public:
	WonToDollar(int won) : Converter(won) { this->won = won; }
	double convert(double src) { return src / won; }
	virtual string getSourceString() { return "��"; }
	virtual string getDestString() { return "�޷�"; }
};

int main() {
	WonToDollar wd(1010);
	wd.run();
}