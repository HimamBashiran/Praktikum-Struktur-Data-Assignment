#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5]; 
};

int main(){
    // Deklarasi variabel Bukufavorit dengan tipe Buku
    Buku BukuFavorit;
    cout << "\tBuku Favorit Saya\n";
    //Mengisi data ke dalam variabel BukuFavorit untuk buku 1
    BukuFavorit.judul_buku[0] = "Algoritma Pemrograman";
    BukuFavorit.pengarang[0] = "Yunus Prademon";
    BukuFavorit.penerbit[0] = "Gramedia Citra Raya";
    BukuFavorit.tebal_halaman[0] = 30;
    BukuFavorit.harga_buku[0] = 12.499;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 2
    BukuFavorit.judul_buku[1] = "Machine Learning untuk Pemula";
    BukuFavorit.pengarang[1] = "Romi Satria Wahono, M. Eng, Ph.D";
    BukuFavorit.penerbit[1] = "Gramedia Center Jakarta";
    BukuFavorit.tebal_halaman[1] = 100;
    BukuFavorit.harga_buku[1] = 149.999;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 3
    BukuFavorit.judul_buku[2] = "Cinta Brontosaurus";
    BukuFavorit.pengarang[2] = "Raditya Dika";
    BukuFavorit.penerbit[2] = "Gramedia Center Bandung";
    BukuFavorit.tebal_halaman[2] = 152;
    BukuFavorit.harga_buku[2] = 69.999;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 4
    BukuFavorit.judul_buku[3] = "Mantappu Jiwa";
    BukuFavorit.pengarang[3] = "Jerome Polin";
    BukuFavorit.penerbit[3] = "Gramedia Center Surabaya";
    BukuFavorit.tebal_halaman[3] = 228;
    BukuFavorit.harga_buku[3] = 29.999;

    //Mengisi data ke dalam variabel BukuFavorit untuk buku 5
    BukuFavorit.judul_buku[4] = "Laskar Pelangi";
    BukuFavorit.pengarang[4] = "Andrea Hirata";
    BukuFavorit.penerbit[4] = "Gramedia Center Internasional";
    BukuFavorit.tebal_halaman[4] = 529;
    BukuFavorit.harga_buku[4] = 74.999;

    for (int i=0; i<5; i++){
        cout << "\n\tBuku favori saya ke-" << i+1 << endl;
        cout << "\tJudul Buku: " << BukuFavorit.judul_buku[i] << endl;
        cout << "\tPengarang: " << BukuFavorit.pengarang[i] << endl;
        cout << "\tPenerbit: " << BukuFavorit.penerbit[i] << endl;
        cout << "\tTebal Halaman: " << BukuFavorit.tebal_halaman[i] << endl;
        cout << "\tHarga Buku: " << BukuFavorit.harga_buku[i] << endl;
    }
    
    return 0;
}
