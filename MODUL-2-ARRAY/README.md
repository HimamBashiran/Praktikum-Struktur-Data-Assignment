# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori

### ARRAY
Array adalah serangkaian variabel dengan nama yang sama. Nilai individual, juga disebut elemen, dalam rangkaian diakses menggunakan indeks. Anda dapat menganggap array sebagai tabel dengan kolom. Kolom berisi sel, dan di setiap sel terdapat nilai. Anda bisa menyimpan data ke sel, atau mengambil data dari sel, menggunakan nomor baris (atau indeks) dalam tabel[1]. Berikut ini adalah beberapa jenis array:

## 1. Array Satu Dimensi
Array satu dimensi adalah larik yang komponennya berupa item data tunggal (angka tunggal, karakter, dan sebagainya)[2]. Misalnya, kita memiliki array satu dimensi yang berisi angka [1, 2, 3, 4].
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
    cout << arr[1] << endl;
    cout << arr[4];
}
```

## 2. Array Dua Dimensi
Array yang elemen-elemennya merupakan array satu dimensi disebut array dua dimensi [H.Davis, 2004]. Misalnya, kita bisa memiliki array dua dimensi seperti [[1, 2], [3, 4]], yang terdiri dari dua baris dan dua kolom.
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[2][2] = {{3, 2}}, {{2, 5}};
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << arr[i][j] << " ";
        };
        cout << endl;
    };
}
```

## 3. Array Multidimensi
Array multidimensi adalah struktur data yang memungkinkan kita untuk menyimpan dan mengelola kumpulan data dalam format yang memiliki lebih dari satu dimensi.
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8, 5, 2}, {9, 2, 7}}};

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                cout << arr[i][j][k] << " ";
            };
            cout << endl;
        };
        cout << endl;
    };
}
```

## 4. Array Empat Dimensi
Array empat dimensi dapat dianggap sebagai kumpulan array tiga dimensi. Misalnya dalam konteks pemrosesan gambar atau video, sebuah array empat dimensi bisa digunakan untuk menyimpan video, di mana dimensi pertama adalah urutan frame, dimensi kedua dan ketiga adalah piksel gambar dalam setiap frame, dan dimensi keempat adalah nilai warna (misalnya, RGB) dari setiap piksel.
Contoh:
int [3][2][4][4]; 

## 5. Array Lima Dimensi
Array lima dimensi menambahkan satu lapisan kompleksitas lagi dan bisa diibaratkan sebagai kumpulan dari array empat dimensi.
Contoh:
int [2][4][4][3][3];

## Guided

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;

int main(){
    // Deklarasi Array
    int arr[2][3][3];
    // Input elemen
    for (int x=0; x < 2; x++)
    {
        for (int y=0; y < 3; y++)
        {
            for (int z=0; z < 3; z++)
            {
                cout << "Input array[" << x << "] [" << y << "] [" << z <<"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
### Penjelasan
Program di atas merupakan program yang menjalankan input array tiga dimensi. Int arr[2][3][3] mendeklarasikan array tiga dimensi secara berurutan dua bagian[matriks], tiga kolom[kolom], tiga baris[baris] sesuai pertanyaan. 

Setelah itu, program meminta user untuk menginputkan nilai menggunakan fungsi perulangan bercabang. Setelah semua nilai telah dimasukkan, program mencetak nilai-nilai array yang telah dimasukkan. Pertama, nilai-nilai array dicetak dalam format [x][y][z] = nilai, di mana x, y, dan z adalah indeks baris, kolom, dan bagian utama array. Setelah itu, program mencetak tampilan array dalam bentuk tabel dengan menggunakan perulangan untuk setiap dimensi.

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main(){
    int maks, a, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;

    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; //Return 1 to indicate error
    }
    int array[a];
    cout << "Masukkan " << a << " angka\n";

    for (int i = 0; i < a; i++){
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }

    maks = array[0];
    lokasi = 0;

    for (int i = 1; i < a; i++){
        if (array[i] > maks){
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
    return 0;
}
```
### Penjelasan
Program di atas merupakan program yang pencarian nilai maksimum dalam sebuah array yang dimasukkan oleh user.

Pertama, program meminta user untuk memasukkan panjang array 'a' yang diinginkan. Percabangan dilakukan di awal untuk mencetak pesan kesalahan dan mengembalikan nilai 1 jika array kurang dari atau sama dengan 0. Selanjutnya, user diminta untuk memasukkan nilai-nilai array sebanyak 'a' kali melalui perulangan. Program mencari nilai maksimum dalam array menggunakan perulangan yang kedua. Variabel maks digunakan untuk menyimpan nilai maksimum, sementara variabel lokasi digunakan untuk menyimpan indeks di mana nilai maksimum ditemukan. Setelah nilai maksimum ditemukan, program mencetak nilai maksimum beserta indeksnya.

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user.
### Data Array : 1 2 3 4 5 6 7 8 9 10
### Nomor Genap : 2, 4, 6, 8, 10,
### Nomor Ganjil : 1, 3, 5, 7, 9,

```C++
#include <iostream>
using namespace std;

int main(){
    // Deklarasi array dengan 10 elemen
    int data[10];

    // Masukkan elemen array
    cout << "Masukkan 10 angka yang diinginkan: ";
    for (int i = 0; i < 10; ++i){
        cin >> data[i];
    }

    // Menampilkan output data array
    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i){
        cout << data[i] << " ";
    }
    
    cout << "\nNomor Genap: ";
    // Menampilkan bilangan genap
    for (int i = 0; i < 10; ++i){
        if (data[i] % 2 == 0){
            cout << data[i] << " ";
        }
    }

    cout << "\nNomor Ganjil: ";
    // Menampilkan bilangan ganjil
    for (int i = 0; i < 10; ++i){
        if (data[i] % 2 != 0){
            cout << data[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
```
#### Output:
![Screenshot (437)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/eb12e622-d570-403b-b321-08ce29ef421d)
### Penjelasan
Program di atas merupakan program untuk output dengan data yang diinputkan oleh user.

Pertama, program mendeklarasikan array data dengan 10 elemen bertipe integer dan diminta untuk memasukkan 10 data yang diingikan menggunakan perulangan. Setelah semua angka telah dimasukkan, program mencetak data array tersebut menggunakan perulangan kedua. 

Program kemudian memisahkan bilangan genap dan bilangan ganjil dari array tersebut.
<pre>
Untuk bilangan genap, program menggunakan perulangan ketiga dengan kondisi data[i] % 2 == 0 untuk memeriksa apakah angka tersebut genap.

Untuk bilangan ganjil, program menggunakan perulangan keempat dengan kondisi data[i] % 2 != 0 untuk memeriksa apakah angka tersebut ganjil.
</pre>
Setelah itu, program mencetak bilangan genap dan bilangan ganjil yang ditemukan.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int x_size, y_size, z_size;

    // Memasukkan jumlah dan ukuran elemen array
    cout << "==================================" << endl;
    cout << "   Array tiga dimensi (x, y, z)" << endl;
    cout << "==================================" << endl;
    cout << "\nMasukkan ukuran matriks array: ";
    cin >> x_size;
    cout << "\nMasukkan ukuran baris array: ";
    cin >> y_size;
    cout << "\nMasukkan ukuran kolom array: ";
    cin >> z_size;
    // Deklarasi Array
    int arr[x_size][y_size][z_size];
    // Input elemen
    for (int x=0; x < x_size; x++)
    {
        for (int y=0; y < y_size; y++)
        {
            for (int z=0; z < z_size; z++)
            {
                cout << "Input array[" << x << "] [" << y << "] [" << z <<"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Data array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //Tampilan array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
#### Output:
![Screenshot (438)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/cbec07a0-0362-4dc3-87b5-c496fda286b7)
### Penjelasan
Program diatas merupakan program yang dirancang untuk membuat dan mengelola sebuah array tiga dimensi berdasarkan ukuran yang dimasukkan oleh user. 

Pertama, program mendeklarasikan variabel x_size, y_size, dan z_size untuk menyimpan ukuran dari array tiga dimensi yang akan dibuat dan setelahnya meminta untuk menginput nilai ukuran matriks, baris, dan kolom array. 

Setelah menginputkan nilai, program mendeklarasikan sebuah array tiga dimensi berdasarkan ukuran yang telah dimasukkan. Selanjutnya, program meminta pengguna untuk memasukkan nilai untuk setiap elemen dalam array. Pengguna harus memasukkan nilai untuk setiap koordinat [x][y][z] dalam array kemudian ditampilkan. 

Terakhir, program menampilkan array secara visual dalam format tiga dimensi.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi tipe data sebuah variabel
    int maks, min, a, lokasiMax, lokasiMin, jumlah = 0, rata;
    // Input panjang array
    cout << "Masukkan panjang array: ";
    cin >> a;

    // Validasi panjang array harus lebih besar dari 0
    if (a <= 0) {
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; // Return 1 untuk indikasi error
    }

    // Deklarasi panjang array
    int array[a];

    // Input elemen array
    cout << "Masukkan " << a << " angka\n";

    // Fungsi perulangan untuk menjumlahkan nilai array
    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << i << ": ";
        cin >> array[i];
        jumlah += array[i];

        // Inisialisasi nilai maks dan min dengan elemen pertama
        if (i == 0) {
            maks = min = array[i];
            lokasiMax = lokasiMin = i;
        } else {
            // Mencari nilai maksimum
            if (array[i] > maks) {
                maks = array[i];
                lokasiMax = i;
            }
            // Mencari nilai minimum
            if (array[i] < min) {
                min = array[i];
                lokasiMin = i;
            }
        }
    }

    // Menampilkan nilai maksimum dan minimum
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasiMax << endl;
    cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasiMin << endl;

    // Menampilkan menu
    cout << "Menu:\n";
    cout << "1. Maksimum\n";
    cout << "2. Minimum\n";
    cout << "3. Rata-rata\n";

    // Pilihan operasi
    cout << "Pilih operasi: ";
    int pilihan;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Nilai maksimum adalah " << maks << " berada di Array ke-" << lokasiMax << endl;
            break;
        case 2:
            cout << "Nilai minimum adalah " << min << " berada di Array ke-" << lokasiMin << endl;
            break;
        case 3:
            // Menghitung rata-rata
            rata = jumlah / a;
            cout << "Nilai rata-ratanya adalah " << rata << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
```
#### Output:
![Screenshot (440)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/32579434-661c-4abc-8202-fdd8006e1d80)
### Penjelasan
Program diatas merupakan program untuk mencari nilai maksimum, minimum, dan rata-rata dari sebuah array yang panjang dan elemennya ditentukan oleh user. 

Pertama, program mendeklarasikan variabel maks, min, a (panjang array), lokasiMax, lokasiMin, jumlah (untuk total elemen), dan rata (untuk nilai rata-rata). Setelah itu, user diminta untuk memasukkan panjang array yang disimpan dalam variabel 'a'. Hal penting selanjutnya adalah memvalidasi apakah panjang array lebih besar dari 0.

Selanjutnya, program mendeklarasikan dan menginputkan elemen-elemen sebanyak 'a' kali. Selama proses input, program menghitung total jumlah elemen array dan mencari nilai maksimum dan minimum serta posisinya dalam array.

Setelah mencari nilai-nilai tersebut, program menampilkan menu operasi menggunakan fungsi switch-case yang dapat dipilih oleh user:
- Pilihan 1: Menampilkan nilai maksimum dan posisinya dalam array.
- Pilihan 2: Menampilkan nilai minimum dan posisinya dalam array.
- Pilihan 3: Menghitung dan menampilkan nilai rata-rata dari array.

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar kumpulan data bernama Array. Array sendiri merupakan suatu kumpulan data yang bertipe data sama. Array juga bersifat statis, artinya  ukuran atau panjangnya ditentukan pada saat deklarasi dan tidak dapat diubah selama program berjalan. Dan banyak juga jenis-jenis dari array, mulai dari satu dimensi, dua dimensi, bahkan multidimensi.

#### Pelajaran yang didapat
Array merupakan bagian dari kumpulan-kumpulan data yang bertipe data sama. Array termasuk bersifat statis yang berarti ukuran atau panjangnya ditentukan pada saat deklarasi dan tidak dapat diubah selama program berjalan. Dengan pemahaman ini, kita dapat mengimplementasikan array dalam pemrograman untuk menyimpan dan mengelola data secara efisien, terutama ketika data memiliki struktur yang terorganisir dalam beberapa dimensi.

## Referensi
[1] Harold Davis, “Programming with Arrays,” 2024.

[2] J. Pardoe, M. King, “Arrays of Objects,” 1997.
