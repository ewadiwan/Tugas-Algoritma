#include <iostream>
using namespace std;

int main() {
    int hadir, totalHadir;
    float persentase;
    int cek = 1;

    while (cek == 1) {
        totalHadir = 0;

        for (int i = 1; i <= 5; i++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << i
                 << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            cin >> hadir;

            totalHadir += hadir;
        }

        persentase = (totalHadir / 5.0) * 100;

        cout << "Persentase Kehadiran: " << persentase << "%" << endl;

        if (persentase > 75) {
            cout << "Status Kehadiran: Baik" << endl;
        }
        else if (persentase >= 50) {
            cout << "Status Kehadiran: Cukup" << endl;
        }
        else {
            cout << "Status Kehadiran: Kurang" << endl;
        }

        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> cek;
    }

    return 0;
}