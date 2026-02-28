#include <iostream>
using namespace std;

int main() {
    cout << "Halo, Git dan C++ sudah konek!" << endl;

    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina >= jantan * 10) {
        jantan++;
        betina += tanggal;
        tanggal++;
    }

    cout << tanggal << endl;
    return 0;
}