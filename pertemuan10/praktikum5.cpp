#include <iostream>
using namespace std;

int main() {
    // 1. Deklarasi array 2D berukuran 3x3
    int matriks[3][3];

    // 2. Input data matriks 3x3
    cout << "Masukkan data matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriks[i][j];
        }
    }

    // 3. Menampilkan kembali dalam bentuk tabel
    cout << "\nHasil tabel matriks:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}