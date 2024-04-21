#include <iostream>
#include <string>
#include <algorithm> // Library algoritma umum yang akan digunakan untuk fungsi sort()
using namespace std;

void BinarySearch(string kalimat, char huruf){

    // Mengurutkan kalimat
    string sortedKalimat = kalimat;
    sort(sortedKalimat.begin(), sortedKalimat.end());

    // Inisialisasi indeks awal dan akhir
    int awal = 0;
    int akhir = sortedKalimat.length() - 1;
    int tengah;

    // Iterasi binary search
    while (awal <= akhir){
        tengah = (awal + akhir) / 2;

        // Jika indeks tengah == huruf, maka huruf yg dicari ditemukan
        if (sortedKalimat[tengah] == huruf){
            cout << "Huruf '" << huruf << "' ditemukan pada kalimat." << endl;
            return;
        }
        // Jika indeks tengah < huruf, maka indeks awal berpindah ke tengah + 1
        else if (sortedKalimat[tengah] < huruf){
            awal = tengah + 1;
        }
        // Jika indeks tengah > huruf, maka indeks akhir berpindah ke tengah - 1
        else {
            akhir = tengah - 1;
        }
    }

    // Jika huruf tidak ditemukan
    cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
}

// Fungsi untuk mencari dan menghitung huruf vocal pada kalimat
int SearchVokal(string kalimat){
    int jumlahVokal = 0;

    for (int i = 0; i < kalimat.length(); i++){
        // pencarian dan penghitungan jumlah huruf vocal
        char huruf = tolower(kalimat[i]);
        if (huruf == 'a' or huruf == 'e' or huruf == 'i' or huruf == 'o' or huruf == 'u'){
            jumlahVokal++;
        }
    }

    return jumlahVokal;
}

int main(){
    string kalimat;
    char huruf;

    // Perintah user untuk memasukkan kalimat
    cout << "Program Mencari Huruf dari Suatu Kalimat menggunakan Binary Search" << endl;
    cout << "Masukkan kalimat (tanpa kapital): ";
    getline(cin, kalimat);

    // Perintah user mencari sebuah huruf dari kalimat 
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    // Panggil fungsi BinarySearch untuk memeriksa apakah huruf yg dicari terdapat pada kalimat tersebut
    BinarySearch(kalimat, huruf);

    // Mencari jumlah huruf vokal dalam kalimat
    int jumlahVokal = SearchVokal(kalimat);
    cout << "Jumlah huruf vokal dalam kalimat '" << kalimat << "' adalah " << jumlahVokal << endl;

    return 0;
}
