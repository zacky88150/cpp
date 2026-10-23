#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 85) {
        cout << "Grade A";
    } else if (nilai >= 75) {
        cout << "Grade B";
    } else if (nilai >= 65) {
        cout << "Grade C";
    } else if (nilai >= 50) {
        cout << "Grade D";
    } else {
        cout << "Grade E";
    }

    return 0;
}