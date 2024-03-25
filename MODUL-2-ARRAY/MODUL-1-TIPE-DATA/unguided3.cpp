#include <iostream>
#include <map>
using namespace std;

int main() {
    // Mendeklarasikan map 'hari' dengan key bertipe data integer dan value bertipe data string
    map<int, string> hari;

    // Mengisi map 'hari' dengan data untuk setiap hari dalam seminggu
    hari[0] = "Senin";
    hari[1] = "Selasa";
    hari[2] = "Rabu";
    hari[3] = "Kamis";
    hari[4] = "Jum'at";
    hari[5] = "Sabtu";
    hari[6] = "Minggu";

    //// Mencetak judul dan nama hari untuk setiap key dalam map 'hari'
    cout << "=== Hari dalam Seminggu ===" << endl;
    cout << "Hari ke-1: " << hari[0] << endl;
    cout << "Hari ke-2: " << hari[1] << endl;
    cout << "Hari ke-3: " << hari[2] << endl;
    cout << "Hari ke-4: " << hari[3] << endl;
    cout << "Hari ke-5: " << hari[4] << endl;
    cout << "Hari ke-6: " << hari[5] << endl;
    cout << "Hari ke-7: " << hari[6] << endl;

    return 0;
}
