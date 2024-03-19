# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Himam Bashiran</p>

## Dasar Teori

### TIPE DATA
Tipe data adalah klasifikasi data yang memberitahu compiler atau interpreter bagaimana pengembang ingin memasukkan data[1]. Tipe data juga membantu memengaruhi cara data tersebut diproses, disimpan, dan digunakan dalam program. Dengan kita memahami tipe data, maka kita dapat membuat keputusan dengan lebih baik dalam merancang struktur data, mengoptimalkan kinerja program, dan dapat terhindar dari manipulasi data. Jenis – jenis tipe data antara lain:

## 1. Tipe Data Primitif
Bahasa pemrograman seperti C++ dan Java memiliki tipe data bawaan (disebut tipe data dasar atau tipe data primitif ) seperti bilangan bulat yang mewakili informasi dan memiliki operasi yang dapat dilakukan pada data tersebut (seperti perkalian dan penjumlahan). Misalnya tipe data dasar bawaan di C++ adalah short, int, long, float, double dan char[2].

## 2. Tipe Data Abstrak
Tipe data abstrak adalah sebuah model matematis untuk jenis data, dimana tipe data tersebut mendefinisikan operasi yang dapat dilakukan padanya, tanpa mengungkapkan implementasi detail dari operasi tersebut. Fitur Class adalah fitur yang sering digunakan untuk Object Oriented Programming (OOP) pada bahasa C++ yang mirip dengan struct pada bahasa C. Akses struct bersifat public sedangkan class bersifat private.

## 3. Tipe Data Koleksi
Tipe data koleksi di C++ sering dikelola melalui Standard Template Library (STL), yang menyediakan kelas-kelas untuk berbagai struktur data koleksi. Beberapa contoh termasuk:

 a.	Vector: Mirip dengan array, tetapi ukurannya dapat berubah.
 
 b.	List  : Daftar terhubung yang memungkinkan penyisipan dan penghapusan elemen dengan cepat di mana saja dalam daftar.
 
 c.	Map   : Koleksi pasangan kunci-nilai dengan kunci unik, sering digunakan untuk pencarian cepat berdasarkan kunci.
 
 d.	Set   : Kumpulan elemen unik yang terurut secara otomatis.

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
        cout<<"Eror!operator is not correct";
    
    }//switch statement ends
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

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
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

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
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. [Soal]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![Screenshot (217)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/408c7026-b530-46b7-bec3-b8b0621f42cd)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] Nagendra Singh, Manish Kumar, Vidhan Singh, and Dayanand Choudhary, “Pengenalan tipe data dasar dalam pemrograman,” Nov. 2023.
[2] W. S. Y. Hardy, “Abstract Data Types,” 2001.
