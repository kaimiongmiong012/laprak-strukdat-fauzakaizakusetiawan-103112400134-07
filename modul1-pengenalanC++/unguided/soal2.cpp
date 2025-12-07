#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka (1-100): ";
    cin >> n;

    string angka[10] = {
        "satu", "dua", "tiga", "empat", "lima",
        "enam", "tujuh", "delapan", "sembilan", "sepuluh"
    };

    if (n < 1 || n > 100) {
        cout << "Angka di luar jangkauan" << endl;
    } else if (n == 100) {
        cout << "seratus" << endl;
    } else if (n <= 10) {
        cout << angka[n - 1] << endl;
    } else if (n < 20) {
        if (n == 11) {
            cout << "sebelas" << endl;
        } else {
            cout << angka[n - 11] << " belas" << endl;
        }
    } else {
        int puluh = n / 10;
        int satuan = n % 10;

        cout << angka[puluh - 1] << " puluh";
        if (satuan != 0) {
            cout << " " << angka[satuan - 1];
        }
        cout << endl;
    }

    return 0;
}
