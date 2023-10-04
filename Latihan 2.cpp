#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int detik, jam, menit, sisaDetik;

    // Menetapkan nilai detik
    detik = 7272;

    // Menghitung jam
    jam = detik / 3600;

    // Menghitung sisa detik setelah dikurangi jam
    sisaDetik = detik % 3600;

    // Menghitung menit
    menit = sisaDetik / 60;

    // Menghitung detik
    sisaDetik = sisaDetik % 60;

    // Menampilkan hasil
    cout << detik << " detik = " << jam << " jam, " << menit << " menit, " << sisaDetik << " detik" << endl;

    return 0;
}