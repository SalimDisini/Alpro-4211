#include <iostream>
using namespace std;

struct luasPP {
    int x,y,jml;
};

struct luasL {
    float x,jml;
};

struct volker {
    float pi, r, t, jml;
};
int main () {
    struct luasPP jumlah;
    jumlah.x=10;
    jumlah.y=20;
    jumlah.jml=jumlah.x*jumlah.y;
    printf("%d * %d = %d",jumlah.x, jumlah.y, jumlah.jml);

    cout << endl;

    struct luasL jumlahL;
    jumlahL.x=14;
    jumlahL.jml=22 / 7 * jumlahL.x * jumlahL.x;
    cout << "22 / 7 * " << jumlahL.x << " ^ 2 = " << jumlahL.jml;

    struct volker sum;
    sum.pi = 22 / 7;
    sum.r = 14;
    sum.t = 10;
    sum.jml = sum.pi * sum.r * sum.r * sum.t;
}
