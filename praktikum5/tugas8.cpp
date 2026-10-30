#include <iostream>

using namespace std;

int main() {
    int pilihan;
    double angka1, angka2, hasil;

    do {
        // Menampilkan Menu
        cout << "===== MENU =====" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        // Proses pilihan menggunakan switch-case
        switch (pilihan) {
            case 1:
                cout << "\n--- PENJUMLAHAN ---" << endl;
                cout << "Masukkan angka pertama: "; cin >> angka1;
                cout << "Masukkan angka kedua: "; cin >> angka2;
                hasil = angka1 + angka2;
                cout << "Hasil: " << angka1 << " + " << angka2 << " = " << hasil << endl;
                break;
            
            case 2:
                cout << "\n--- PENGURANGAN ---" << endl;
                cout << "Masukkan angka pertama: "; cin >> angka1;
                cout << "Masukkan angka kedua: "; cin >> angka2;
                hasil = angka1 - angka2;
                cout << "Hasil: " << angka1 << " - " << angka2 << " = " << hasil << endl;
                break;
            
            case 3:
                cout << "\n--- PERKALIAN ---" << endl;
                cout << "Masukkan angka pertama: "; cin >> angka1;
                cout << "Masukkan angka kedua: "; cin >> angka2;
                hasil = angka1 * angka2;
                cout << "Hasil: " << angka1 << " * " << angka2 << " = " << hasil << endl;
                break;
            
            case 4:
                cout << "\n--- PEMBAGIAN ---" << endl;
                cout << "Masukkan angka pertama: "; cin >> angka1;
                cout << "Masukkan angka kedua: "; cin >> angka2;
                
                // Validasi pembagian dengan angka nol
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                    cout << "Hasil: " << angka1 << " / " << angka2 << " = " << hasil << endl;
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                }
                break;
            
            case 5:
                cout << "\nTerima kasih! Keluar dari program..." << endl;
                break;
            
            default:
                cout << "\nPilihan tidak valid! Silakan pilih menu 1-5." << endl;
                break;
        }
        
        cout << "\n--------------------------------\n" << endl;

    } while (pilihan != 5); // Menu akan terus diulang selama pilihan BUKAN 5

    return 0;
}
