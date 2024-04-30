#include <iostream>
#include <string>
using namespace std;

struct Hewan{
    string nama_hewan;
    char jenis_kelamin;
    string berkembangbiak;
    string pernapasan;
    string tempat;
    bool karnivora; //menggunakan boolean (true or false)
};

struct Hewan_Darat{
    Hewan info_hewan; 
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
}; Hewan_Darat hewan1;

struct Hewan_Laut{
    Hewan info_hewan; 
    string bentuk_sirip;
    string pertahanan_diri;
}; Hewan_Laut hewan2;

int main(){
    hewan1.info_hewan.nama_hewan = "Kucing";
    hewan1.info_hewan.jenis_kelamin = 'Jantan';
    hewan1.info_hewan.berkembangbiak = "Melahirkan";
    hewan1.info_hewan.pernapasan = "Paru-paru";
    hewan1.info_hewan.tempat = "Daratan";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meong";

    hewan2.info_hewan.nama_hewan = "Penyu";
    hewan2.info_hewan.jenis_kelamin = 'Betina';
    hewan2.info_hewan.berkembangbiak = "Bertelur";
    hewan2.info_hewan.pernapasan = "Insang";
    hewan2.info_hewan.tempat = "Laut";
    hewan2.info_hewan.karnivora = false;
    hewan2.bentuk_sirip = "Sirip dan ekor";
    hewan2.pertahanan_diri = "Pertahanan yang kuatt";

    cout << "\tHewan Darat" << endl;
    cout << "\tNama Hewan: " <<  hewan1.info_hewan.nama_hewan << endl;
    cout << "\tJenis Kelamin: " << hewan1.info_hewan.jenis_kelamin << endl;
    cout << "\tBerkembangbiak: " << hewan1.info_hewan.berkembangbiak << endl;
    cout << "\tAlat Pernapasan: " << hewan1.info_hewan.pernapasan << endl;
    cout << "\tTempat hidup: " << hewan1.info_hewan.tempat << endl;
    cout << "\tApakah karnivora?: " << hewan1.info_hewan.karnivora << endl;
    cout << "\tJumlah kaki: " << hewan1.jumlah_kaki << endl;
    cout << "\tApakah menyusui?: " << hewan1.apakah_menyusui << endl;
    cout << "\tSuara: " << hewan1.suara << endl;

    cout << "\n\tHewan Laut" << endl;
    cout << "\tNama Hewan: " <<  hewan2.info_hewan.nama_hewan << endl;
    cout << "\tJenis Kelamin: " << hewan2.info_hewan.jenis_kelamin << endl;
    cout << "\tBerkembangbiak: " << hewan2.info_hewan.berkembangbiak << endl;
    cout << "\tAlat Pernapasan: " << hewan2.info_hewan.pernapasan << endl;
    cout << "\tTempat hidup: " << hewan2.info_hewan.tempat << endl;
    cout << "\tApakah karnivora?: " << hewan2.info_hewan.karnivora << endl;
    cout << "\tBentuk sirip: " << hewan2.bentuk_sirip << endl;
    cout << "\tPertahanan diri?: " << hewan2.pertahanan_diri << endl;

    return 0;
}

