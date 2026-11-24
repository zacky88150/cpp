#include <iostream>
using namespace std;

int main() {
    int data[5] = {10, 20, 30, 40, 50};
    int cari;
    int indeks = -1;

    cout << "Data: ";
    for (int i = 0; i < 5; i++) {
        cout << data[i] << " ";
    }

    cout << "\nCari angka: ";
    cin >> cari;

    for (int i = 0; i < 5; i++) {
        if (data[i] == cari) {
            indeks = i;
            break;
        }
    }

    if (indeks != -1) {
        cout << "\nData ditemukan pada indeks " << indeks << endl;
    } else {
        cout << "\nData tidak ditemukan" << endl;
    }

    return 0;
}