#include <iostream>
using namespace std;

// Fungsi menerima array dan ukurannya, lalu mengembalikan nilai rata-rata
double hitungRataRata(int nilai[], int jumlah) {
    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return (double)total / jumlah;
}

int main() {
    int nilaiMahasiswa[5];

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << (i + 1) << ": ";
        cin >> nilaiMahasiswa[i];
    }

    double rataRata = hitungRataRata(nilaiMahasiswa, 5);
    cout << "\nRata-rata nilai = " << rataRata << endl;

    return 0;
}