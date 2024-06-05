#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku; 
};Buku buku1, buku2;

int main(){
    //Mengisi data ke dalam variabel buku1
    buku1.judul_buku = "Algoritma Pemrograman";
    buku1.pengarang = "Yunus Prademon";
    buku1.penerbit = "Gramedia Citra Raya";
    buku1.tebal_halaman = 30;
    buku1.harga_buku = 12500;

    //Menampilkan data
    cout << "\tBuku favorit saya" << endl;
    cout << "\tJudul buku: " << buku1.judul_buku << endl;
    cout << "\tPengarang: " << buku1.pengarang << endl;
    cout << "\tPenerbit: " << buku1.penerbit << endl;
    cout << "\tTebal halaman: " << buku1.tebal_halaman << endl;
    cout << "\tHarga: Rp" << buku1.harga_buku << endl;

    //Mengisi data ke dalam variabel buku2
    buku2.judul_buku = "Indo menang";
    buku2.pengarang = "Oel";
    buku2.penerbit = "ITTP";
    buku2.tebal_halaman = 100;
    buku2.harga_buku = 100000;

    //Menampilkan data
    cout << "\n\tBuku favorit saya" << endl;
    cout << "\tJudul buku: " << buku2.judul_buku << endl;
    cout << "\tPengarang: " << buku2.pengarang << endl;
    cout << "\tPenerbit: " << buku2.penerbit << endl;
    cout << "\tTebal halaman: " << buku2.tebal_halaman << endl;
    cout << "\tHarga: Rp" << buku2.harga_buku << endl;
    return 0;
}
