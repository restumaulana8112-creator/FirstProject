#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    cout << "Masukkan nama Anda!" << endl;
    getline(cin, nama);
    cout << "Halo " << nama << "! Selamat, program Anda berhasil!!" << endl;
    return 0;
}