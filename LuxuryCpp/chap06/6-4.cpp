#include <iostream>
using namespace std;

class MyVector {
    int* mem;
    int size;
public:
    MyVector(int n = 100, int val = 0) { mem = new int[n]; size = n; for (int i = 0; i < size; i++) mem[i] = val; }
    ~MyVector() { delete[]mem; }
    void show() {
        int count = 0;
        for (int i = 0; i < size; i++) {
            cout << mem[i] << ' ';
            count++;
        }
        cout << endl << "ÃÑ " << count << "¹ø Ãâ·ÂµÊ" << endl << endl;
    }
};

int main() {
    MyVector a;
    MyVector b(10);
    MyVector c(15, 10);
    a.show();
    b.show();
    c.show();
}