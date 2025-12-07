#include <iostream>
#define MAX 5 
using namespace std;

struct Stack {
    int top;
    int data[MAX];
} tumpukan;

void init() {
    tumpukan.top = -1;
}
bool isFull() {
    return tumpukan.top == MAX - 1;
}
bool isEmpty() {
    return tumpukan.top == -1;
}
void push(int nilai) {
    if (isFull()) {
        cout << "tumpukan full, tidak bisa menambahkan" << endl;
    } else {
        tumpukan.top++;
        tumpukan.data[tumpukan.top] = nilai;
        cout << "data " << nilai << " berhasil ditambahkan." << endl;
    }
}
void pop() {
    if (isEmpty()) {
        cout << "tumpukan kosong, tidak ada yang bisa diambil." << endl;
    } else {
        cout << "data " << tumpukan.data[tumpukan.top] << " sudah diambil." << endl;
        tumpukan.top--;
    }
}
void printStack() {
    if (isEmpty()) {
        cout << "tumpukan kosong." << endl;
    } else {
        cout << "isi stack saat ini : ";

        for (int i = tumpukan.top; i >= 0; i--) {
            cout << tumpukan.data[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    init();
    int pilihan, data;

    do {
        cout << "\n program stack " << endl;
        cout << "1. push/tambah" << endl;
        cout << "2. pop/ambil" << endl;
        cout << "3. tampilkan stack" << endl;
        cout << "4. exit" << endl;
        cout << "pilih angka : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "masukan angka: ";
            cin >> data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            printStack();
            break;
        case 4:
            cout << "terimakasih" << endl;
            break;
        default:
            cout << "pilihan tidak ada." << endl;
        }
    } while (pilihan != 4);

    return 0;
}