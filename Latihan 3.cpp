#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int bilangan1, bilangan2;

    // Input dua bilangan dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Mencari bilangan terbesar
    if (bilangan1 > bilangan2) {
        cout << "Bilangan terbesar adalah: " << bilangan1 << endl;
    } else {
        cout << "Bilangan terbesar adalah: " << bilangan2 << endl;
    }

    return 0;
}