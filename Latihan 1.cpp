#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Deklarasi variabel
    double jariJari, volume, luasPermukaan;
    const double pi = 3.14;

    // Input jari-jari dari pengguna
    cout << "Masukkan nilai jari-jari bola: ";
    cin >> jariJari;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * pi * pow(jariJari, 3);

    // Menghitung luas permukaan bola
    luasPermukaan = 4 * pi * pow(jariJari, 2);

    // Menampilkan hasil
    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << luasPermukaan << endl;

    return 0;
}