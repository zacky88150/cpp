#include <iostream>
using namespace std;

int main() {
    int nilai[10];

    // 1. Input 10 nilai mahasiswa
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
    }

    // Inisialisasi dengan elemen pertama array
    int tertinggi = nilai[0];
    int terendah = nilai[0];

    // 2 & 3. Membandingkan setiap elemen menggunakan percabangan
    for (int i = 1; i < 10; i++) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }

    // 4. Tampilkan hasil
    cout << "\nNilai tertinggi = " << tertinggi << endl;
    cout << "Nilai terendah = " << terendah << endl;

    return 0;
}