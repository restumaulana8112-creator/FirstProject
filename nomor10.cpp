#include <iostream>
using namespace std;

int main() {
    int n = 0;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 5; j++) {
            n++;
            if (n > 3) break;
        }
        n++;
    }
    cout << "Nilai akhir n: " << n << endl;

    

    return 0;
}