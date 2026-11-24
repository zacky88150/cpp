#include <iostream>
using namespace std;

int main() {
    long long harga[10];
    long long total = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Masukkan harga barang ke-" << (i + 1) << ": ";
        cin >> harga[i];
        total += harga[i];
    }

    cout << "\nDaftar harga barang:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Barang ke-" << (i + 1) << ": " << harga[i] << endl;
    }

    cout << "\nJumlah keseluruhan = " << total << endl;
    return 0;
}