#include <iostream>

using namespace std;

int main() {
    int angka;

    // Meminta pengguna memasukkan angka
    cout << "Masukkan angka: ";
    cin >> angka;

    cout << "\nTabel Perkalian " << angka << ":\n";
    cout << "--------------------\n";

    // Perulangan dari 1 sampai 10
    for (int i = 1; i <= 10; ++i) {
        cout << angka << " x " << i << " = " << angka * i << endl;
    }

    return 0;
}