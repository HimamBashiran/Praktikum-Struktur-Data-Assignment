#include <iostream>
using namespace std;

const float pi = 3.14;

// Fungsi untuk menghitung Volume Kerucut
float hitungVolumeKerucut(float rusuk, float tinggi){
    return (1.0/3 * pi * rusuk * rusuk * tinggi);
}

// Fungsi untuk menghitung Luas Kerucut
float hitungLuasKerucut(float rusuk, float tinggi, float garispelukis){
    return (pi * rusuk * (rusuk+garispelukis));
}

// 
int main(){
    int PilihMenu;
    float rusuk, tinggi, garispelukis;

    cout << "Pilihan Menu:\n";
    cout << "1. Hitung Volume Kerucut\n";
    cout << "2. Hitung Luas Permukaan Kerucut\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> PilihMenu;

    switch(PilihMenu){
        case 1:
            cout << "Masukkan panjang rusuk: ";
            cin >> rusuk;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Volume kerucut adalah: " << hitungVolumeKerucut(rusuk, tinggi) << endl;
            break;
        case 2:
            cout << "Masukkan panjang rusuk: ";
            cin >> rusuk;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << "Masukkan garis pelukis: ";
            cin >> garispelukis;
            cout << "Luas permukaan kerucut adalah: "<< hitungLuasKerucut(rusuk, tinggi, garispelukis) << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}