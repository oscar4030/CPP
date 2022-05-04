#include <iostream>
using namespace std;

int big(int x, int y) {
    if (y > x) {
        if (y < 100) return y;
    }
    else {
        if (x < 100) return x;
    }
    return 100;
}

int big(int x, int y, int limit) {
    if (y > x) {
        if (y < limit) return y;
    }
    else {
        if (x < limit) return x;
    }
    return limit;
}
int main() {
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}
