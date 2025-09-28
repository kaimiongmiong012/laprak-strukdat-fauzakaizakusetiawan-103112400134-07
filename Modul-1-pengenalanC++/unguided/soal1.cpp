#include <iostream>
using namespace std;

int main(){
    float n1, n2;

    cout << "Masukkan angka pertama: ";
    cin >> n1;
    cout << "Masukkan angka kedua: ";
    cin >> n2;

    // Penjumlahan
    cout << "Penjumlahan: " << n1 + n2 << endl;
    // Pengurangan
    cout << "Pengurangan: " << n1 - n2 << endl;
    // Perkalian
    cout << "Perkalian: " << n1 * n2 << endl;
    // Pembagian
    if(n2 != 0){
        cout << "Pembagian: " << n1 / n2 << endl;
    } else {
        cout << "Pembagian tidak valid" << endl;
    }
    return 0;
}
