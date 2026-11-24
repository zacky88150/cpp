#include <iostream>
using namespace std;

int main() {
    // 1. Deklarasi array dengan 5 elemen bertipe int
    int angka[5];

    // 2. Input 5 bilangan dari keyboard
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }

    // 3. Menampilkan seluruh elemen array
    cout << "\nData array:\n";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}