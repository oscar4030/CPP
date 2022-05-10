#include <iostream>
using namespace std;
class Matrix {
    int x[4];
public:
    Matrix() { for (int i = 0; i < 4; ++i) x[i] = 0; }
    Matrix(int x1, int x2, int x3, int x4) {
        x[0] = x1; x[1] = x2; x[2] = x3; x[3] = x4;
    }
    void show() {
        cout << "Matrix = { ";
        for (int i = 0; i < 4; ++i)
            cout << x[i] << ' ';
        cout << "}" << endl;
    }
    friend Matrix operator+(Matrix op1, Matrix op2);
    friend Matrix& operator+=(Matrix& op1, Matrix op2);
    friend bool operator==(Matrix op1, Matrix op2);
};
Matrix operator+(Matrix op1, Matrix op2) {
    Matrix tmp;
    for (int i = 0; i < 4; ++i)
        tmp.x[i] = op1.x[i] + op2.x[i];
    return tmp;
}
Matrix& operator+=(Matrix& op1, Matrix op2) {
    for (int i = 0; i < 4; ++i)
        op1.x[i] += op2.x[i];
    return op1;
}
bool operator==(Matrix op1, Matrix op2) {
    for (int i = 0; i < 4; ++i) {
        if (op1.x[i] != op2.x[i])
            return false;
    }
    return true;
}
int main() {
    Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
    c = a + b;
    a += b;
    a.show(); b.show(); c.show();
    if (a == c)
        cout << "a and c are the same" << endl;
}