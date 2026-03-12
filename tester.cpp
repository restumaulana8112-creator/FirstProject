#include <iostream>
using namespace std;

int main() {
    cout << "Halo, Git dan C++ sudah konek!" << endl;

    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina <= jantan * 10) {
        jantan++;
        betina += tanggal;
        tanggal++;
    }

    cout << tanggal << endl;

    /*int a, b, c;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    cout << a + b + c << endl;*/

    for (int i = 1; i <= 4; i++) {
     for (int j = 1; j <= i; j++) {
        cout << "*";
     }
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //Soal dari Gemini
    cout << "\n 10 Soal dari Gemini \n" << "Soal Pertama:" << endl;
    for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= i; j++) {
        if (j % 2 == 0) {
            cout << "*";
            break;
        }
      }
    }
    cout << "\n Soal Kedua:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                continue;
            }
        }
    }
    cout << "\n Soal Ketiga:" << endl;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 3 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n Soal Keempat:" << endl;

    cout << "\n Soal Kelima:" << endl;

    cout << "\n Soal Keenam:" << endl;

    cout << "\n Soal Ketujuh:" << endl;

    cout << "\n Soal Kedelapan:" << endl;

    cout << "\n Soal Kesembilan:" << endl;

    cout << "\n Soal Kesepuluh:" << endl;
    

    return 0;
}