#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], hasil[2][2];

    // 1. Input Matriks A
    cout << "Matriks A:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    // 2. Input Matriks B
    cout << "\nMatriks B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // 3. Penjumlahan Matriks A dan B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = A[i][j] + B[i][j];
        }
    }

    // 4. Menampilkan hasil
    cout << "\nHasil:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}