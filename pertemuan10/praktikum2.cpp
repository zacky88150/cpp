#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int total = 0;
    double rataRata;

    // 1. Menginput 5 nilai mahasiswa
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
    }

    // 2. Menampilkan data dan menghitung total nilai
    cout << "\nNilai:\n";
    for (int i = 0; i < 5; i++) {
        cout << nilai[i] << " ";
        total += nilai[i];
    }

    // 3. Menghitung rata-rata nilai
    rataRata = (double)total / 5;

    // 4. Menampilkan hasil
    cout << "\nTotal = " << total << endl;
    cout << "Rata-rata = " << rataRata << endl;

    return 0;
}