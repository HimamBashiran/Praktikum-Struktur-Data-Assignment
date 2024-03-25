#include <iostream>
using namespace std;

int main() {
    // Deklarasi tipe data sebuah variabel
    int maks, min, a, lokasiMax, lokasiMin, jumlah = 0, rata;
    // Input panjang array
    cout << "Masukkan panjang array: ";
    cin >> a;

    // Validasi panjang array harus lebih besar dari 0
    if (a <= 0) {
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk indikasi error
    }

    // Deklarasi panjang array
    int array[a];

    // Input elemen array
    cout << "Masukkan " << a << " angka\n";

    // Fungsi perulangan untuk menjumlahkan nilai array
    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        jumlah += array[i];

        // Inisialisasi nilai maks dan min dengan elemen pertama
        if (i == 0) {
            maks = min = array[i];
            lokasiMax = lokasiMin = i;
        } else {
            // Mencari nilai maksimum
            if (array[i] > maks) {
                maks = array[i];
                lokasiMax = i;
            }
            // Mencari nilai minimum
            if (array[i] < min) {
                min = array[i];
                lokasiMin = i;
            }
        }
    }

    // Menampilkan nilai maksimum dan minimum
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasiMax << endl;
    cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasiMin << endl;

    // Menghitung rata-rata
    rata = jumlah / a;
    cout << "Nilai rata-ratanya adalah " << rata << endl;

    return 0;
}
