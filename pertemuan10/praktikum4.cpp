#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int lulus = 0;
    int tidakLulus = 0;

    // 1. Input 5 nilai ke dalam array
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
    }

    // 2. Hitung jumlah lulus dan tidak lulus menggunakan perulangan & percabangan
    for (int i = 0; i < 5; i++) {
        if (nilai[i] >= 60) {
            lulus++;
        } else {
            tidakLulus++;
        }
    }

    // 3. Tampilkan hasil
    cout << "\nJumlah lulus = " << lulus << endl;
    cout << "Jumlah tidak lulus = " << tidakLulus << endl;

    return 0;
}