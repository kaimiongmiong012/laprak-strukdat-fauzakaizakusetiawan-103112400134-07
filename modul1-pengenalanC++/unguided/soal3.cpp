#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan angka: ";
    cin >> n;

    int i = n;
    while (i >= 1) {
        int j = 0;
        while (j < n - i) {
            cout << "  ";
            j++;
        }

        j = i;
        while (j > 0) cout << j-- << " ";

        cout << "* ";

        j = 1;
        while (j <= i) {
            cout << j++;
            if (j <= i) cout << " ";
        }

        cout << endl;
        i--;
    }

    int j = 0;
    while (j < n) cout << "  ", j++;
    cout << "*" << endl;

    return 0;
}
