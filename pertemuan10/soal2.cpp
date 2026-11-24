#include <iostream>
using namespace std;

int main() {
    int nilai[10];
    int total = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    double rataRata = (double)total / 10;
    cout << "\nRata-rata = " << rataRata << endl;

    cout << "Nilai di atas rata-rata: ";
    for (int i = 0; i < 10; i++) {
        if (nilai[i] > rataRata) {
            cout << nilai[i] << " ";
        }
    }
    cout << endl;

    return 0;
}