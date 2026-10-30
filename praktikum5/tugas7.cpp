#include <iostream>

using namespace std;

int main() {
    int tinggi_segitiga;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi_segitiga;

    // Loop luar untuk mengatur jumlah baris
    for (int i = 1; i <= tinggi_segitiga; i++) {
        // Loop dalam untuk mencetak bintang pada tiap baris
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Pindah baris setelah inner loop selesai
    }

    return 0;
}
