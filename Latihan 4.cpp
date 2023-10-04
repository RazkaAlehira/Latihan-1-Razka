#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int bilangan;

    // Input bilangan dari pengguna
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    // Menentukan bilangan genap atau ganjil
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl;
    }

    return 0;
}