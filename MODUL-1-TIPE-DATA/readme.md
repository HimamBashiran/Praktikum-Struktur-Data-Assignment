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

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] Nagendra Singh, Manish Kumar, Vidhan Singh, and Dayanand Choudhary, “Pengenalan tipe data dasar dalam pemrograman,” Nov. 2023.

[2] W. S. Y. Hardy, “Abstract Data Types,” 2001.
