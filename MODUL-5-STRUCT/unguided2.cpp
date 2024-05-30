/*
Pertanyaan: Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya?

Jawab: Jika mendeklarasikan variabel struct pada guided1 berjenis array, maka kita mendeklarasikan sebuah array dari struktur `Buku` dan memberikan instruksi kepada program untuk menyediakan ruang memori untuk beberapa objek `Buku` yang akan disimpan dalam array tersebut. Misalnya, `Buku daftar_buku[5];` akan membuat array `daftar_buku` yang dapat menyimpan hingga lima buku.

Kemudian, proses pengisian data ke dalam array `daftar_buku` mirip dengan cara mengisi data ke dalam `MyBook` dan `MyBook`, namun perlu menentukan indeks dari setiap objek `Buku` dalam array tersebut. Setiap indeks mewakili satu buku dalam array. Misalnya, `daftar_buku[0]` akan merepresentasikan buku pertama, `daftar_buku[1]` akan merepresentasikan buku kedua, dan seterusnya.

Setelah mengisi data ke dalam array `daftar_buku`, gunakan loop, seperti `for` loop, untuk menampilkan informasi tentang setiap buku dalam array. Dengan melakukan iterasi melalui array dan mencetak informasi buku untuk setiap indeks, maka dapat menampilkan data buku-buku tersebut dalam urutan yang sesuai.

Penting untuk diingat bahwa kita harus menyesuaikan ukuran array dengan jumlah buku yang ingin kita simpan. Jika ingin menyimpan tiga buku, maka dapat mendeklarasikan array `Buku daftar_buku[3];` dan kemudian menggunakan loop hanya untuk tiga elemen.

Dengan demikian, menggunakan array dari struktur `Buku` memungkinkan untuk mengelola dan memanipulasi kumpulan buku dengan cara yang lebih efisien dalam program.
*/

// Contoh program deklarasi variabel struct berjenis array 
#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[2];
    string pengarang[2];
    string penerbit[2];
    int tebal_halaman[2];
    double harga_buku[2]; 
};

int main(){

    Buku MyBook;
    //Mengisi data ke dalam variabel MyBook
    MyBook.judul_buku[0] = "Algoritma Pemrograman";
    MyBook.pengarang[0] = "Yunus Prademon";
    MyBook.penerbit[0] = "Gramedia Citra Raya";
    MyBook.tebal_halaman[0] = 30;
    MyBook.harga_buku[0] = 12.499;

    //Mengisi data ke dalam variabel MyBook
    MyBook.judul_buku[1] = "Indo menang";
    MyBook.pengarang[1] = "Oel";
    MyBook.penerbit[1] = "ITTP";
    MyBook.tebal_halaman[1] = 100;
    MyBook.harga_buku[1] = 100.999;

    //Menampilkan data
    for (int i=0; i < 2; i++){
        cout << "\n\tBuku favorit saya ke-" << i+1 << endl;
        cout << "\tJudul buku: " << MyBook.judul_buku[i] << endl;
        cout << "\tPengarang: " << MyBook.pengarang[i] << endl;
        cout << "\tPenerbit: " << MyBook.penerbit[i] << endl;
        cout << "\tTebal halaman: " << MyBook.tebal_halaman[i] << endl;
        cout << "\tHarga: Rp" << MyBook.harga_buku[i] << endl;
    }
    
    return 0;
}
