# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Himam Bashiran</p>

## Dasar Teori

### TIPE DATA
Tipe data adalah klasifikasi data yang memberitahu compiler atau interpreter bagaimana pengembang ingin memasukkan data[1]. Tipe data juga membantu memengaruhi cara data tersebut diproses, disimpan, dan digunakan dalam program. Dengan kita memahami tipe data, maka kita dapat membuat keputusan dengan lebih baik dalam merancang struktur data, mengoptimalkan kinerja program, dan dapat terhindar dari manipulasi data. Jenis – jenis tipe data antara lain:

## 1. Tipe Data Primitif
Bahasa pemrograman seperti C++ dan Java memiliki tipe data bawaan (disebut tipe data dasar atau tipe data primitif)seperti bilangan bulat yang mewakili informasi dan memiliki operasi yang dapat dilakukan pada data tersebut (seperti perkalian dan penjumlahan). Misalnya tipe data dasar bawaan di C++ adalah short, int, long, float, double dan char[2].

## 2. Tipe Data Abstrak
Tipe data abstrak adalah sebuah model matematis untuk jenis data, dimana tipe data tersebut mendefinisikan operasi yang dapat dilakukan padanya, tanpa mengungkapkan implementasi detail dari operasi tersebut. Fitur Class adalah fitur yang sering digunakan untuk Object Oriented Programming (OOP) pada bahasa C++ yang mirip dengan struct pada bahasa C. Akses struct bersifat public sedangkan class bersifat private.

## 3. Tipe Data Koleksi
Tipe data koleksi di C++ sering dikelola melalui Standard Template Library (STL), yang menyediakan kelas-kelas untuk berbagai struktur data koleksi. Beberapa contoh termasuk:
<pre>
a.	Vector: Mirip dengan array, tetapi ukurannya dapat berubah.
b.	List  : Daftar terhubung yang memungkinkan penyisipan dan penghapusan elemen dengan cepat di mana saja dalam daftar.
c.	Map   : Koleksi pasangan kunci-nilai dengan kunci unik, sering digunakan untuk pencarian cepat berdasarkan kunci.
d.	Set   : Kumpulan elemen unik yang terurut secara otomatis.
</pre>

## Guided

### 1. Tipe Data Primitif

```C++
#include<iostream>
using namespace std;
///Main program
int main()
{
    char op;
    float num1, num2;
    //it allows user to enter operator i.e. +,- ,*, /
    cout<<"Masukan Operator: " << endl;
    cin >> op;
    cout << "Masukkan Angka 1 dan 2: ";
    cin>>num1>>num2;

    switch(op)
    {
    case'+':
        cout<<num1+num2;
        break;
    case'_':
        cout<<num1 - num2;
        break;
    case '*':
        cout<<num1 * num2;
        break;
    case '/':
        cout<<num1 / num2;
        break;
    default:
        cout<<"Error!operator is not correct";
    
    }//switch statement ends
    return 0;
}
```
Program di atas merupakan program kalkulator sederhana dimana kita dapat menginput operator dan angka yang kita inginkan untuk dihitung. 

Variabel op merupakan variabel bertipe char yang dapat dimasukkan satu karakter. Dalam program ini kita dapat memasukkan operator yang diinginkan seperti +, -, *, /. Variabel num1, num2 merupakan variabel bertipe data float yang dapat kita masukkan operand (angka) yang kita inginkan.

Struktur switch dan case merupakan struktur dalam pengambilan keputusan. Blok switch memeriksa nilai op. Jika op adalah +, maka program akan menjalankan num1 + num2. Jika op adalah -, maka program akan menjalankan num1 - num2 dan seterusnya. Akan tetapi, jika op tidak sesuai dengan semua case, maka program akan menampilkan Error!operator is not correct.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
Program di atas merupakan program yang menggunakan tipe data struct yang memungkinkan kita menggabungkan beberapa variabel dengan tipe data yang berbeda menjadi satu kesatuan. Dalam program ini, struct Mahasiswa memiliki tiga anggota yaitu name, age, address. name dan address merupakan pointer ke string (const char *) dan age adalah bilangan bulat (int). 

Variabel dapat diisi dengan tipe struct. Dalam program ini, kita membuat dua variabel yaitu mhs1 dan mhs2  dengan tipe Mahasiswa. Kita dapat mengisi nilai ke variabel mhs1 dan mhs2 dengan menggunakan operator ".", contohnya mhs.name = "Dian" dan dapat dipanggil menggunakan syntax printf.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Program di atas merupakan program tipe data koleksi yaitu array. int nilai[5]; mendeklarasikan sebuah array integer dengan nama nilai dan berukuran 5 elemen serta dapat menyimpan 5 nilai integer. nilai[0] = 23 artinya memberikan bilangan bulat spesifik 23 ke variabel nilai dan ditampilkan menggunakan pernyataan cout.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
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
```
#### Output:
![Screenshot (380)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/ebef92c5-7d66-4c8f-9361-bee0b4dd08b6)

Program di atas merupakan program untuk menghitung volume dan luas permukaan kerucut. Mendeklarasikan tipe data abstrak yaitu const float pi = 3.14.

Membuat fungsi yang memuat variabel hitungVolumeKerucut merupakan variabel yang memiliki parameter rusuk dan tinggi yang bertipe data float. Ketika fungsi tersebut dipanggil, maka akan mengembalikan rumus dari volume kerucut yaitu (1.0/3 * pi * rusuk * rusuk * tinggi).

Membuat fungsi yang memuat variabel hitungLuasKerucut merupakan variabel yang memiliki parameter rusuk, tinggi, garispelukis yang bertipe data float. Ketika fungsi tersebut dipanggil, maka akan mengembalikan rumus dari luas permukaan kerucut yaitu (pi * rusuk * (rusuk+garispelukis)). 

Dalam fungsi utama, mendeklarasikan variabel PilihMenu untuk menentukan apakah ingin menghitung volume kerucut atau luas permukaan kerucut.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya.

```C++
#include <iostream>
#include <string>
using namespace std;

//Class standar yang belum publik akses
class Buku{
    string judul;
    string pengarang;
    int tahun_terbit;
};

//Class yang sudah publik akses
class Buku_Favorit1{
public:
    string judul;
    string pengarang;
    int tahun_terbit;
};

struct Buku_Favorit2{
public:
    string judul;
    string pengarang;
    int tahun_terbit;
};

int main(){
    //Merepresentasikan buku 1 dan buku 2
    Buku_Favorit1 buku1;
    Buku_Favorit2 buku2;

    //Mengisi nilai ke struct buku 1
    buku1.judul = "Atomic Habits";
    buku1.pengarang = "James Clear";
    buku1.tahun_terbit = 2019;

    //Mencetak isi struct buku 1
    cout << "=== Buku Favorit 1 ==="
         << "\nJudul Buku: " << buku1.judul
         << "\nPengarang: " << buku1.pengarang
         << "\nTahun Terbit: " << buku1.tahun_terbit << endl;

    //Mengisi nilai ke struct buku 2
    buku2.judul = "7 Habits of Highly Effective People";
    buku2.pengarang = "Stephen R.Covey";
    buku2.tahun_terbit = 1989;

    //Mencetak isi struct buku 2
    cout << "\n=== Buku Favorit 2 ==="
         << "\nJudul Buku: " << buku2.judul
         << "\nPengarang: " << buku2.pengarang
         << "\nTahun Terbit: " << buku2.tahun_terbit << endl;
         
    return 0;
}
```
#### Output:
![Screenshot (382)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/c7e8a46a-69e1-4b95-80ad-aa02cc20c2a9)

a) Class: fungsi class merupakan fungsi yang sering digunakan pada Object Oriented Programming (OOP) dan mengandung atribut (variabel) dan method (fungsi) yang sering didefinisikan sebagai perilaku dan sifatnya. Akses kontrol dari class adalah private. Dalam program ini, class Buku tidak digunakan secara langsung tetapi mewakili sebuah kelas dengan anggota private.

b) Struct: fungsi struct merupakan fungsi yang mirip dengan class tetapi memiliki struktur data yang lebih sederhana dan akses kontrol yang bersifat public, artinya dapat diakses dari mana saja. Dalam contoh program ini, Buku_Favorit1 adalah kelas dengan anggota public, yang memungkinkan akses langsung ke judul, pengarang, dan tahun_terbit dari fungsi main() atau bagian lain dari kode.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
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
```
#### Output:
![Screenshot (384)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/3837c18a-0839-45a4-8b1c-481b47525aed)

Map adalah struktur data asosiatif yang memungkinkan penyimpanan dan pengaksesan data berdasarkan kunci yang unik. Map disini digunakan untuk menyimpan kunci nilai yang mewakili hari dalam seminggu. Perbedaannya adalah Array menggunakan indeks berbasis integer yang dimulai dari 0 dan secara berurutan tetapi kurang fleksibel sedangkan Map mengizinkan kunci dari berbagai tipe data dan tidak harus berurutan atau berbasis integer dan  fleksible dalam penambahan, penghapusan, atau modifikasi dengan mudah.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] Nagendra Singh, Manish Kumar, Vidhan Singh, and Dayanand Choudhary, “Pengenalan tipe data dasar dalam pemrograman,” Nov. 2023.

[2] W. S. Y. Hardy, “Abstract Data Types,” 2001.
