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
    for (int i = 1; i <= 4; i++) {
        if (i % 2 == 0) break;
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
    }
    cout << "\n Soal Kelima:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 1) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n Soal Keenam:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j < i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n Soal Ketujuh:" << endl;
    for (int i = 1; i <= 5; i += 2) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n Soal Kedelapan:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 2) break;
            if (j == 1) cout << "*";
        }
    }
    cout << "\n Soal Kesembilan:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = i; j >= 1; j--) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n Soal Kesepuluh:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 2; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    


    return 0;
}