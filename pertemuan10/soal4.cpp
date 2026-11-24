#include <iostream>
using namespace std;

int main() {
    int matriks[3][3];
    int total = 0;

    cout << "Masukkan elemen matriks 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriks[i][j];
            total += matriks[i][j];
        }
    }

    cout << "\nJumlah seluruh elemen matriks = " << total << endl;
    return 0;
}