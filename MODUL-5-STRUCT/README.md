# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
### Variabel
Dalam pemrograman komputer, variabel digunakan untuk menyimpan informasi untuk dijadikan referensi dan digunakan oleh program. Variabel terbagi menjadi 2 jenis yakni variabel lokal dan global.
<pre>
Variabel lokal: variabel lokal adalah variabel yang hanya diakses oleh subprogram yang memilikinya.
Variabel global: variabel global adalah variabel yang dapat diakses di seluruh subprogram manapun.
</pre>
Subprogram adalah bagian kecil hasil pembagian program dalam konsep prosedural programming [1].

### Struktur (struct)
Struct adalah tipe data bentukan yang berisi kumpulan variabel-variabel yang bernaung dalam satu nama yang sama dan memiliki kaitan satu sama lain. Berbeda dengan array hanya berupa kumpulan variabel yang bertipe data sama, struct bisa memiliki variabel-variabel yang bertipe data sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe data array atau struct itu sendiri. Variabel-variabel yang menjadi anggota struct disebut dengan elemen struct [2]. Terdapat banyak format penulisan diantaranya:
![Screenshot 2024-05-03 125410](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/a028c1a0-ccb7-4a55-8469-14a86f85f345)

## Guided

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
```
### Penjelasan
Program di atas merupakan program penggunaan tipe data struct dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku.

Pertama, mengimpor library iostream untuk input/output dan library string untuk menggunakan tipe data string. Selanjutnya, mendefinisikan sebuah 'struct' bervariabel 'Buku' kemudian membuat instan variabel1 dengan nama buku1 dan instan variabel2 dengan nama buku2. Struct 'Buku' memiliki lima variabel anggota: 
<pre>
judul_buku: String untuk menyimpan judul buku.
pengarang: String untuk menyimpan nama pengarang.
penerbit: String untuk menyimpan nama penerbit.
tebal_halaman: Integer untuk menyimpan jumlah halaman dalam buku.
harga_buku: Double untuk menyimpan harga buku.
</pre>
Kemudian mendeklarasikan Buku buku1, buku2 dan mengisi data ke buku1 dan menampilkan data buku1. Lakukan hal yang sama untuk instan variabel buku2.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan
![Screenshot 2024-05-03 131331](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/beeab5f1-864d-4682-b66a-b8db3383dbfd)

```C++
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
```
### Penjelasan
Program di atas merupakan program struct yang mendefinisikan dua struct berbeda: 'Hewan_Darat' dan 'Hewan_Laut'.

Pertama, mengimpor library iostream untuk input/output dan library string untuk memanggil tipe data string. Selanjutnya, mendefiniskan struct 'Hewan' yang memiliki beberapa atribut seperti 'nama_hewan', 'jenis_kelamin', 'berkembangbiak', 'pernapasan', 'tempat', dan 'karnivora'. Kemudian, kita mendefinisikan struktur data 'Hewan_Darat' yang memiliki atribut dari struktur 'Hewan' serta atribut tambahan seperti 'jumlah_kaki', 'apakah_menyusui', dan 'suara'. Selanjutnya, kita mendefinisikan struktur data 'Hewan_Laut' yang juga memiliki atribut dari struktur 'Hewan' serta atribut tambahan seperti 'bentuk_sirip' dan 'pertahanan_diri'.

Kemudian, membuat fungsi utama 'main', kita membuat dua objek: 'hewan1' dan 'hewan2' dari tipe 'Hewan_Darat' dan 'Hewan_Laut'. Dan memanggil informasi mengenai 'Hewan_Darat' dan 'Hewan_Laut' yang meliputi nama hewan, jenis kelamin, cara berkembang biak, alat pernapasan, tempat hidup, apakah karnivora, jumlah kaki (hanya pada hewan darat), apakah menyusui (hanya pada hewan darat), suara (hanya pada hewan darat), bentuk sirip (hanya pada hewan laut), dan pertahanan diri (hanya pada hewan laut).

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
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
```
#### Output:
![Screenshot (558)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/d2a8fef8-7178-45cd-8bda-d27fb19ddf1e)
### Penjelasan
Program di atas merupakan program untuk memodifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5 dan diisi dengan data yang kemudian ditampilkan.

Program dimulai dengan memanggil library 'iostream' untuk I/O, library 'string' untuk menggunakan tipe data string. Kemudian, kita mendefinisikan struktur data 'Buku' yang memiliki beberapa array untuk menyimpan informasi tentang buku-buku favorit.
Setiap array memiliki elemen yang sesuai dengan atribut buku, seperti 'judul_buku', 'pengarang', 'penerbit', 'tebal_halaman', dan 'harga_buku'. Di dalam fungsi utama 'main', kita membuat objek 'BukuFavorit' dari tipe 'Buku'. Kita mengisi data ke dalam array 'BukuFavorit' untuk lima buku favorit. Setiap buku memiliki atribut seperti 'judul', 'pengarang', 'penerbit', 'tebal halaman', dan 'harga'. 

Terakhir, setelah mengisi data, kita menggunakan perintah 'cout' untuk menampilkan informasi tentang setiap buku favorit.

### Full Code Screenshot
![unguided1](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/79d04bdf-9da6-4f23-80e7-0fa0d505dbd3)

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
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
```
#### Output:
![Screenshot (559)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/b556d6d3-ed04-476e-83f6-5ee162ab9ac7)
### Penjelasan
Program di atas merupakan contoh program berdasarkan pertanyaan "Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya?"

Sebelum memasukki contoh programnya, saya akan menjawab pertanyaan terlebih dahulu. Jika mendeklarasikan variabel struct pada guided1 berjenis array, maka kita mendeklarasikan sebuah array dari struktur `Buku` dan memberikan instruksi kepada program untuk menyediakan ruang memori untuk beberapa objek `Buku` yang akan disimpan dalam array tersebut. Misalnya, `Buku daftar_buku[5];` akan membuat array `daftar_buku` yang dapat menyimpan hingga lima buku.

Kemudian, proses pengisian data ke dalam array `daftar_buku` mirip dengan cara mengisi data ke dalam `MyBook` dan `MyBook`, namun perlu menentukan indeks dari setiap objek `Buku` dalam array tersebut. Setiap indeks mewakili satu buku dalam array. Misalnya, `daftar_buku[0]` akan merepresentasikan buku pertama, `daftar_buku[1]` akan merepresentasikan buku kedua, dan seterusnya.

Setelah mengisi data ke dalam array `daftar_buku`, gunakan loop, seperti `for` loop, untuk menampilkan informasi tentang setiap buku dalam array. Dengan melakukan iterasi melalui array dan mencetak informasi buku untuk setiap indeks, maka dapat menampilkan data buku-buku tersebut dalam urutan yang sesuai.

Penting untuk diingat bahwa kita harus menyesuaikan ukuran array dengan jumlah buku yang ingin kita simpan. Jika ingin menyimpan tiga buku, maka dapat mendeklarasikan array `Buku daftar_buku[3];` dan kemudian menggunakan loop hanya untuk tiga elemen.

Dengan demikian, menggunakan array dari struktur `Buku` memungkinkan untuk mengelola dan memanipulasi kumpulan buku dengan cara yang lebih efisien dalam program.

MARI KITA LANJUT KE CONTOH PROGRAM:
Program dimulai dengan memanggil library 'iostream' untuk I/O, library 'string' untuk menggunakan tipe data string. Kemudian, kita mendefinisikan struktur data 'Buku' yang memiliki beberapa array untuk menyimpan informasi tentang buku-buku favorit. Setiap array memiliki elemen yang sesuai dengan atribut buku, seperti 'judul_buku', 'pengarang', 'penerbit', 'tebal_halaman', dan 'harga_buku'. Dan menginisialisasikan fungsi utama main dengan membuat objek 'MyBook' dari tipe 'Buku'. Kita mengisi data ke dalam array 'MyBook' untuk dua buku favorit. Setiap buku memiliki atribut seperti 'judul', 'pengarang', 'penerbit', 'tebal halaman', dan 'harga'.

Terakhir, setelah mengisi data, kita menggunakan perintah 'cout' untuk menampilkan informasi tentang setiap buku favorit. Dengan menggunakan array dari struktur Buku, kita dapat mengelola dan memanipulasi kumpulan buku dengan cara yang lebih efisien dalam program. Jika ingin menyimpan lebih banyak buku, kita hanya perlu menyesuaikan ukuran array sesuai dengan jumlah buku yang ingin kita simpan. Misalnya, jika ingin menyimpan tiga buku, kita dapat mendeklarasikan array Buku daftar_buku[3]; dan kemudian menggunakan loop hanya untuk tiga elemen.

### Full Code Screenshot
![unguided2](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/b15c2e82-a20b-430a-aa72-3d5a99f4cc04)

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar tipe data bentukan yang berisi kumpulan variabel-variabel yang bernaung dalam satu nama yang sama dan memiliki kaitan satu sama lain yang kita sebut dengan struct. Berbeda dengan array hanya berupa kumpulan variabel yang bertipe data sama, struct bisa memiliki variabel-variabel yang bertipe data sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe data array atau struct itu sendiri.

#### Pelajaran yang didapat
Struct adalah tipe data bentukan yang berisi kumpulan variabel-variabel yang bernaung dalam satu nama yang sama dan memiliki kaitan satu sama lain. Berbeda dengan array hanya berupa kumpulan variabel yang bertipe data sama, struct bisa memiliki variabel-variabel yang bertipe data sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe data array atau struct itu sendiri. Variabel-variabel yang menjadi anggota struct disebut dengan elemen struct.

## Referensi
[1] Rachmat Selamet, “PERBANDINGAN SUBPROGRAM PADA BAHASA C DAN JAVA”, 2018.

[2] Triase, ST, M. Kom, "STRUKTUR DATA", 2020.