#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int jumlah;
    int harga;
    int total;

    cout << "========================================" << endl;
    cout << "     SELAMAT DATANG DI TIKET BUS" << endl;
    cout << "========================================" << endl;
    cout << "   Silakan pilih tujuan perjalanan Anda" << endl;
    cout << "========================================" << endl;

    cout << "1. Malang - Surabaya  Rp35.000" << endl;
    cout << "2. Malang - Pasuruan  Rp20.000" << endl;
    cout << "3. Malang - Jombang   Rp25.000" << endl;

    cout << "========================================" << endl;

    cout << "Pilih tujuan (1/2/3): ";
    cin >> pilihan;

    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    if (pilihan == 1) {
        harga = 35000;
        cout << endl;
        cout << "Tujuan : Malang - Surabaya" << endl;
    }
    else if (pilihan == 2) {
        harga = 20000;
        cout << endl;
        cout << "Tujuan : Malang - Pasuruan" << endl;
    }
    else if (pilihan == 3) {
        harga = 25000;
        cout << endl;
        cout << "Tujuan : Malang - Jombang" << endl;
    }
    else {
        cout << endl;
        cout << "Maaf, pilihan tujuan tidak tersedia." << endl;
        system("pause");
        return 0;
    }

    total = harga * jumlah;

    cout << "Harga tiket : Rp" << harga << endl;
    cout << "Jumlah      : " << jumlah << " penumpang" << endl;
    cout << "Total bayar : Rp" << total << endl;

    cout << "========================================" << endl;
    cout << "   Terima kasih telah memesan tiket." << endl;
    cout << "   Selamat menikmati perjalanan!" << endl;
    cout << "========================================" << endl;

    system("pause");

    return 0;
}
