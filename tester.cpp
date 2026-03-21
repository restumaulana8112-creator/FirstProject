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
    cout << "\n======10 Soal dari Gemini======\n" << "Soal Pertama:" << endl;
    for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= i; j++) {
        if (j % 2 == 0) {
            cout << "*";
            break;
        }
      }
    }
    cout << "\nSoal Kedua:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                continue;
            }
        }
    }
    cout << "\nSoal Ketiga:" << endl;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 3 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\nSoal Keempat:" << endl;
    for (int i = 1; i <= 4; i++) {
        if (i % 2 == 0) break;
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
    }
    cout << "\nSoal Kelima:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 1) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\nSoal Keenam:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j < i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\nSoal Ketujuh:" << endl;
    for (int i = 1; i <= 5; i += 2) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\nSoal Kedelapan:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 2) break;
            if (j == 1) cout << "*";
        }
    }
    cout << "\nSoal Kesembilan:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = i; j >= 1; j--) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\nSoal Kesepuluh:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 2; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }

    cout << "\n======10 Soal dari Gemini #2======\n" << "Soal Pertama:" << endl;
    for (int i = 1; i <= 3; i++) {
        if (i == 2) continue;
        for (int j = 1; j <= 2; j++) {
            cout << "*";
        }
    }
    cout << "\n#2 Soal Kedua:" << endl;
    for (int i = 1; i <= 3; i++) {
        if (i == 2) continue;
        for (int j = 1; j <= 2; j++) {
            cout << "*";
        }
    }
    cout << "\n#2 Soal Ketiga:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 != 0) break;
            cout << "*";
        }
    }
    cout << "\n#2 Soal Keempat:" << endl;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 3; j++) {
            if (j == 2) continue;
            cout << "*";
        }
    }
    cout << "\n#2 Soal Kelima:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 3; j >= 1; j--) {
            if (j == i) break;
            cout << "*";
        }
    }
    cout << "\n#2 Soal Keenam:" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 3) break;
            if (j == 2) cout << "*";
        }
    }
    cout << "\n#2 Soal Ketujuh:" << endl;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            cout << "*";
            break;
        }
    }
    cout << "\n#2 Soal Kedelapan:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 2; j++) {
            if ((i + j) % 2 == 0) continue;
            cout << "*";
        }
    }
    cout << "\n#2 Soal Kesembilan:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (j > 1) break;
            cout << "*";
        }
    }
    cout << "\n#2 Soal Kesepuluh:" << endl;
    int count = 0;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 5; j++) {
            count++;
            if (count == 3) break;
        }
    }
    cout << count;
    //``` (Anggap output adalah jumlah bintang yang diwakili angka)

    cout << "\n======10 Soal dari Gemini #3======\n" << "Soal Pertama:" << endl;
    int x = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j % 2 == 0) continue;
            if (i == 2) break;
            x++;
        }
    }
    cout << "\n#3 Soal Kedua:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            switch(j) {
                case 1: cout << "*"; break;
                case 2: break; 
            }
        }
    }
    cout << "\n#3 Soal Ketiga:" << endl;
    int hasil = 0;
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == j) continue;
            hasil += j;
        }
    }
    cout << "\n#3 Soal Keempat:" << endl;
    bool stop = false;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (stop) break;
            if (i + j == 3) {
                cout << "*";
                stop = true;
            }
        }
    }
    cout << "\n#3 Soal Kelima:" << endl;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= (i * 2); j++) {
            if (j > 2) break;
            cout << "*";
        }
    }
    cout << "\n#3 Soal Keenam:" << endl;
    int semua = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) continue;
            if (i == j) semua++;
        }
    }
    cout << "\n#3 Soal Ketujuh:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = i; j <= 3; j++) {
            if (j == 3) cout << "*";
        }
    }
    cout << "\n#3 Soal Kedelapan:" << endl;
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= 3; j++) {
            if (i + j == 4) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n#3 Soal Kesembilan:" << endl;
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= 3; j++) {
            if (i + j == 4) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\n#3 Soal Kesepuluh:" << endl;
    int m = 0;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 5; j++) {
            m++;
            if (m > 3) break;
        }
        m++;
    }
    cout << m;

    cout << "\n======10 Soal dari Gemini #4======\n" << "#4 Soal Pertama:" << endl;
    for (int i = 1; i <= 3; i++) {
        int j = 1;
        while (j <= i) {
            if (i + j == 4) {
                j++;
                continue;
            }
            cout << "*";
            j++;
        }
    }
    cout << "\n#4 Soal Kedua:" << endl;
    int y = 10;
    for (int i = 1; i <= 2; i++) {
        int j = 5;
        while (j > i) {
            if (j == 4) break;
            y -= i;
            j--;
        }
    }
    cout << "\n#4 Soal Ketiga:" << endl;
    for (int i = 1; i <= 3; i++) {
    int j = 1;
        while (true) {
            if (j > 2) break;
            if (i == j) {
                j++;
                continue;
            }
            cout << "*";
            j++;
        }
    }
    cout << "\n#4 Soal Keempat:" << endl;
    for (int i = 1; i <= 2; i++) {
    int j = 1;
        while (j <= 4) {
            cout << "*";
            j += i;
        }
    }
    cout << "\n#4 Soal Kelima:" << endl;
    int b = 0;
    for (int i = 1; i <= 4; i++) {
        if (i % 2 == 0) continue;
        int j = 1;
        while (j <= i) {
            b++;
            j++;
        }
    }
    cout << "\n#4 Soal Keenam:" << endl;
    for (int i = 1; i <= 2; i++) {
    int j = 1;
        while (j * i <= 4) {
            if (j == 2) {
                j++;
                continue;
            }
            cout << "*";
            j++;
        }
    }
    cout << "\n#4 Soal Ketujuh:" << endl;
    int i = 1;
    while (i <= 3) {
        for (int j = 1; j <= 2; j++) {
            if (i == 2) break;
            cout << "*";
        }
        i++;
    }
    cout << "\n#4 Soal Kedelapan:" << endl;
    int result = 0;
    for (int i = 1; i <= 3; i++) {
        int j = i;
        while (j > 0) {
            if (i % 2 == 0) {
                result--;
            } else {
                result++;
            }
            j--;
        }
    }
    cout << "\n#4 Soal Kesembilan:" << endl;
    for (int i = 1; i <= 3; i++) {
    int j = 1;
        while (j <= 3) {
            if (j == i) {
                j++;
                continue;
            }
            cout << "*";
            j++;
        }
    }
    cout << "\n#4 Soal Kesepuluh:" << endl;
    int limit = 2;
    for (int i = 1; i <= limit; i++) {
        int j = 1;
        while (j <= 2) {
            cout << "*";
            if (i == 1 && j == 1) limit = 3;
            j++;
        }
    }

    cout << "\n======10 Soal dari Gemini #5======\n" << "#5 Soal Pertama:" << endl;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            for (int k = 1; k <= 3; k++) {
                if (k == 2) break;
                cout << "*";
            }
        }
    }
    cout << "\n#5 Soal Kedua:" << endl;
    for (int i = 1; i <= 3; i++) {
    int j = 1;
        while (j <= 3) {
            if (i + j == 4) {
                j++;
                continue;
            }
            if (j == 3) break;
            cout << "*";
            j++;
        }
    }
    cout << "\n#5 Soal Ketiga:" << endl;
    int q = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0) continue;
            if (j == 2) break;
            q += i;
        }
    }
    cout << "\n#5 Soal Keempat:" << endl;
    int total = 0; //int total berada di luar loop, sehingga nilainya akan terus bertambah setiap kali loop dijalankan, bukan di-reset menjadi 0 setiap kali loop dimulai.
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            if (total >= 3) break;
            cout << "*";
            total++;
        }
    }
    cout << "\n#5 Soal Kelima:" << endl;
    for (int i = 3; i >= 1; i--) {
    int j = 3;
        while (j >= 1) {
            if (i == j) {
                j--;
                continue;
            }
            cout << "*";
            if (i + j == 3) break;
            j--;
        }
    }
    cout << "\n#5 Soal Keenam:" << endl;
    int j = 0;
    for (int i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            if (i == 1 && j == 2) continue;
            cout << "*";
        }
        if (j > 3) cout << "*";
    }
    cout << "\n#5 Soal Ketujuh:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i * j > 3) {
                if (i == j) break;
                cout << "*";
            }
        }
    }
    cout << "\n#5 Soal Kedelapan:" << endl;
    int hitung = 0;
    for (int i = 1; i <= 2; i++) {
        int j = 1;
        while (j <= 3) {
            if (i == 1) {
                j += 2;
                hitung++;
                continue;
            }
            hitung++;
            j++;
        }
        cout << hitung << endl;
    }
    cout << "\n#5 Soal Kesembilan:" << endl;
    for (int i = 1; i <= 2; i++) {
    int j = 1;
    cout << "A";
        while (j <= 2) {
            if (i == 2) break;
            cout << "B";
            j++;
        }
    }
    cout << "\n#5 Soal Kesepuluh:" << endl;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = j; k <= 3; k++) {
                if (i + j + k > 5) continue;
                cout << "*";
            }
        }
    }


    cout << "\n======4 Soal TOKI bagian D======\n" << "Soal Pertama:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    }
    cout << "\nSoal Kedua:" << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
                break;
            }
        }
    }
    cout << "\nSoal Ketiga:" << endl;
    for (int i = 1; i <= 4; i++) {
        if (i % 2 == 0) {
            continue;
        }
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << "*";
            }
        }
    }
    cout << "\nSoal Keempat:" << endl;
    int n = 47;
    while (true) {
        if (n == 0) {
            break;
        }
        cout << "*";
        n = n / 10;
    }

    cout << "\n======Latihan rutin di TLX======\n" << endl;
    int M = 10;

    for (int i = 1; i <= M; i++) {
        // cetak i buah "*"
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // sisanya, cetak "."
        for (int j = i + 1; j <= M; j++) {
            cout << ".";
        }

        cout << endl;
    }

    return 0;
}