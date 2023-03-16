#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

int jumlah (int a[]) {
    int z = 0;
    for (int i = 0;i < 5;i++) {
        z = z + a[i];
    }
    return z;
}

float rata (int a[]) {
    float z = 0;
    for (int i = 0;i < 5;i++) {
        z = z + a[i];
    }
    float y = z / 5;
    return y;
}

int main () {
    cout << "Pertambahan menggunakan fungsi" << endl;
    cout << "Masukkan 2 angka" << endl;
    int a, b;
    cin >> a;
    cin >> b;
    cout << tambah(a,b) << endl << endl;

    cout << "Pengurangan menggunakan fungsi" << endl;
    cout << "Masukkan 2 angka" << endl;
    int c, d;
    cin >> c;
    cin >> d;
    cout << kurang(c,d) << endl << endl;

    cout << "Penjumlahan 5 angka menggunakan fungsi" << endl;
    cout << "Masukkan 5 angka" << endl;
    int arr[5], h = 0;
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
    }
    cout << jumlah(arr) << endl << endl;

    cout << "Menghitung rata rata 5 angka yang sebelumnya diinput menggunakan fungsi" << endl;
    cout << rata(arr) << endl;

}
