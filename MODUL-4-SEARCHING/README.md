# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
Algoritma Pencarian (searching algortihm) adalah algoritma yang menerima sebuah argumen kunci dan langkah-langkah tertentu akan mencari data yang disimpan dengan kunci tersebut. Setelah proses dilaksanakan, kemungkinannya adalah data ditemukan (successful) atau tidak ditemukan (unsuccessful) [1]. Dalam algoritma pencarian, terdapat dua jenis yaitu pencarian berurutan (sequential search) dan pencarian bagi dua (binary search).

### 1. SEQUENTIAL SEARCH
Sequential Search adalah proses membandingkan setiap elemen array satu per satu secara beruntun dimulai dari elemen pertama hingga elemen yang dicari ditemukan atau hingga elemen terakhir array. Proses  yang  terjadi  pada  metode  pencarian  ini adalah sebagai berikut: 
<pre>
1. Membaca array data.
2. Menentukan data yang dicari.
3. Mulai dari data pertama sampai dengan data terakhir, data yang dicari dibandingkan dengan masing-masing data di dalam array. Jika data yang dicari tidak ditemukan maka semua data atau elemen array dibandingkan sampai selesai. Jika data yang dicari ditemukan maka  perbandingan akan dihentikan [2].
</pre>

### 2. BINARY SEARCH
Binary Search adalah cara untuk pencarian data pada array yang sudah terurut, karena salah satu syarat dalam Binary Search adalah data sudah dalam keadaan terurut. Dengan kata lain apabila data belum dalam keadaan terurut, pencarian Binary tidak dapat dilakukan. Binary Search ini dilakukan untuk:
<pre>
a. Memperkecil jumlah operasi perbandingan yang harus dilakukan antara data yang dicari dengan data yang ada didalam tabel, khususnya untuk jumlah data yang sangat besar ukurannya.
b. Beban komputasi lebih kecil karena pencarian dilakukan dari depan, belakang dan tengah.
c. Prinsip dasarnya adalah melakukan proses pembagian ruang pencarian secara berulang-ulang sampai data ditemukan atau sampai pencarian tidak dapat dibagi lagi (berarti terdapat kemungkinan data tidak ditemukan).
</pre>

## Guided

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;

int main(){
    int n = 10; // corrected the value of n to 11 to match the number of elements in the data array
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}; // added the last occurence of the number 10
    int cari = 10;
    bool ketemu = false;
    int i;

    // Algoritma Sequential Search
    for (i = 0; i < n; i++){
        if (data[i] == cari){
            ketemu = true;
            break;
        }
    }

    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << "data : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else{
        cout << cari << " tidak dapat ditemukan pada data" << endl;
    }

    return 0;
}
```
### Penjelasan
Program di atas merupakan program pencarian angka 10 pada sebuah data array menggunakan pencarian berurutan (sequential search).

Pertama, mengimpor library iostream untuk input/output dan membuat fungsi utama 'main' untuk eksekusi program. Mendeklarasikan semua variabel yang diperlukan termasuk menyimpan data, nilai yang dicari 'cari', variabel untuk menandai apakah elemen telah ditemukan 'ketemu', dan variabel iterasi 'i'. Membuat program algoritma sequential search menggunakan loop 'for'. Jika angka yang dicari ditemukan, variabel 'ketemu' diatur menjadi true dan loop dihentikan menggunakan 'break'. Terakhir, mencetak data yang terdapat pada array dan kemudian mencetak hasil pencarian.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
### Penjelasan
Program di atas merupakan program pencarian sebuah angka yang user inginkan pada sebuah data array yang telah disediakan menggunakan pencarian bagi dua (binary search).

Pertama, mengimpor library iostream untuk input/output dan library iomanip untuk mengatur format output. Menginisialisasi array int bil_data[7] = {1, 8, 2, 5, 4, 9, 7}. Selanjutnya, membuat fungsi 'selection_sort' untuk mengurutkan angka secara ascending. Membuat fungsi 'binary_search'. Nilai yang dicari dibandingkan dengan elemen tengah larik.
<pre>
- Jika nilai yang dicari sama dengan elemen tengah, 'b_flag' diatur ke 1 untuk menandai bahwa elemen ditemukan, dan loop dihentikan.
- Jika nilai yang dicari kurang dari elemen tengah, rentang pencarian diperkecil ke setengah kiri larik (indeks awal hingga tengah - 1).
- Jika nilai yang dicari lebih besar dari elemen tengah, rentang pencarian diperkecil ke setengah kanan larik (indeks tengah + 1 hingga akhir).
</pre>
Setelah loop selesai, program memeriksa apakah elemen telah ditemukan. Jika 'b_flag' adalah 1, itu berarti elemen ditemukan dan indeksnya dicetak. Jika 'b_flag' tetap 0, itu berarti elemen tidak ditemukan, dan pesan yang sesuai dicetak.

Terakhir, membuat fungsi utama 'main' untuk output, meminta user memasukkan nilai yang ingin dicari, melakukan selection sort pada data, menampilkan data setelah diurutkan, melakukan pencarian menggunakan binary search, dan mencetak hasil pencarian.

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah 'huruf' pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <string>
#include <algorithm> // Library algoritma umum yang akan digunakan untuk fungsi sort()
using namespace std;

void BinarySearch(string kalimat, char 'huruf'){

    // Mengurutkan kalimat
    string sortedKalimat = kalimat;
    sort(sortedKalimat.begin(), sortedKalimat.end());

    // Inisialisasi indeks awal dan akhir
    int awal = 0;
    int akhir = sortedKalimat.length() - 1;
    int tengah;

    // Iterasi binary search
    while (awal <= akhir){
        tengah = (awal + akhir) / 2;

        // Jika indeks tengah == 'huruf', maka 'huruf' yg dicari ditemukan
        if (sortedKalimat[tengah] == 'huruf'){
            cout << "'Huruf' '" << 'huruf' << "' ditemukan pada kalimat." << endl;
            return;
        }
        // Jika indeks tengah < 'huruf', maka indeks awal berpindah ke tengah + 1
        else if (sortedKalimat[tengah] < 'huruf'){
            awal = tengah + 1;
        }
        // Jika indeks tengah > 'huruf', maka indeks akhir berpindah ke tengah - 1
        else {
            akhir = tengah - 1;
        }
    }

    // Jika 'huruf' tidak ditemukan
    cout << "'Huruf' '" << 'huruf' << "' tidak ditemukan dalam kalimat." << endl;
}

int main(){
    string kalimat;
    char 'huruf';

    // Perintah user untuk memasukkan kalimat
    cout << "Program Mencari 'Huruf' dari Suatu Kalimat menggunakan Binary Search" << endl;
    cout << "Masukkan kalimat (tanpa kapital): ";
    getline(cin, kalimat);

    // Perintah user mencari sebuah 'huruf' dari kalimat 
    cout << "Masukkan 'huruf' yang ingin dicari: ";
    cin >> 'huruf';

    // Panggil fungsi BinarySearch untuk memeriksa apakah 'huruf' yg dicari terdapat pada kalimat tersebut
    BinarySearch(kalimat, 'huruf');

    return 0;
}
```
#### Output:
![Screenshot (527)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/bd7fb798-d35f-4c08-9c43-b9934823aeb7)
### Penjelasan
Program di atas merupakan program untuk mencari sebuah 'huruf' pada sebuah kalimat yang sudah di input dengan menggunakan algoritma Binary Search.

Program dimulai dengan memanggil library 'iostream' untuk I/O, library 'string' untuk menggunakan tipe data string, dan memanggil library 'algorithm' untuk fungsi sort. Membuat fungsi BinarySearch yang mengandung parameter 'kalimat' bertipe string dan ''huruf'' bertipe char. Pertama-tama, kalimat diurutkan menggunakan fungsi sort() dari library algorithm. Hasil pengurutan disimpan dalam 'sortedKalimat'. Selanjutnya, dilakukan iterasi binary search pada 'sortedKalimat' untuk mencari ''huruf''. Jika ''huruf'' ditemukan, maka program mencetak pesan bahwa ''huruf'' tersebut ditemukan dalam kalimat. Jika ''huruf'' tidak ditemukan, maka program mencetak pesan bahwa ''huruf'' tersebut tidak ditemukan dalam kalimat.

Terakhir, mendefinisikan fungsi utama 'main' yang berisi program meminta pengguna memasukkan sebuah kalimat menggunakan fungsi 'getline()' untuk membaca seluruh baris. Selanjutnya, program meminta pengguna memasukkan sebuah 'huruf' yang ingin dicari. Kemudian, fungsi 'BinarySearch()' dipanggil dengan parameter kalimat dan 'huruf' yang ingin dicari.

### Full Code Screenshot
![unguided1](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/8397e2ec-1b22-43dc-8679-6fb719d7283a)

### 2. Buatlah sebuah program yang dapat menghitung banyaknya 'huruf' vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
#include <algorithm> // Library algoritma umum yang akan digunakan untuk fungsi sort()
using namespace std;

void BinarySearch(string kalimat, char 'huruf'){

    // Mengurutkan kalimat
    string sortedKalimat = kalimat;
    sort(sortedKalimat.begin(), sortedKalimat.end());

    // Inisialisasi indeks awal dan akhir
    int awal = 0;
    int akhir = sortedKalimat.length() - 1;
    int tengah;

    // Iterasi binary search
    while (awal <= akhir){
        tengah = (awal + akhir) / 2;

        // Jika indeks tengah == 'huruf', maka 'huruf' yg dicari ditemukan
        if (sortedKalimat[tengah] == 'huruf'){
            cout << "'Huruf' '" << 'huruf' << "' ditemukan pada kalimat." << endl;
            return;
        }
        // Jika indeks tengah < 'huruf', maka indeks awal berpindah ke tengah + 1
        else if (sortedKalimat[tengah] < 'huruf'){
            awal = tengah + 1;
        }
        // Jika indeks tengah > 'huruf', maka indeks akhir berpindah ke tengah - 1
        else {
            akhir = tengah - 1;
        }
    }

    // Jika 'huruf' tidak ditemukan
    cout << "'Huruf' '" << 'huruf' << "' tidak ditemukan dalam kalimat." << endl;
}

// Fungsi untuk mencari dan menghitung 'huruf' vocal pada kalimat
int SearchVokal(string kalimat){
    int jumlahVokal = 0;

    for (int i = 0; i < kalimat.length(); i++){
        // pencarian dan penghitungan jumlah 'huruf' vocal
        char 'huruf' = tolower(kalimat[i]);
        if ('huruf' == 'a' or 'huruf' == 'e' or 'huruf' == 'i' or 'huruf' == 'o' or 'huruf' == 'u'){
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main(){
    string kalimat;
    char 'huruf';

    // Perintah user untuk memasukkan kalimat
    cout << "Program Mencari 'Huruf' dari Suatu Kalimat menggunakan Binary Search" << endl;
    cout << "Masukkan kalimat (tanpa kapital): ";
    getline(cin, kalimat);

    // Perintah user mencari sebuah 'huruf' dari kalimat 
    cout << "Masukkan 'huruf' yang ingin dicari: ";
    cin >> 'huruf';

    // Panggil fungsi BinarySearch untuk memeriksa apakah 'huruf' yg dicari terdapat pada kalimat tersebut
    BinarySearch(kalimat, 'huruf');

    // Mencari jumlah 'huruf' vokal dalam kalimat
    int jumlahVokal = SearchVokal(kalimat);
    cout << "Jumlah 'huruf' vokal dalam kalimat '" << kalimat << "' adalah " << jumlahVokal << endl;

    return 0;
}
```
#### Output:
![Screenshot (529)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/38ad6ade-f876-4278-8478-706cae16ac69)
### Penjelasan
Program diatas merupakan program untuk menghitung banyaknya 'huruf' vocal dalam sebuah kalimat!


Program dimulai dengan memanggil library 'iostream' untuk I/O, library 'string' untuk menggunakan tipe data string, dan memanggil library 'algorithm' untuk fungsi sort.

Program mendefinisikan fungsi BinarySearch yang mengandung parameter 'kalimat' bertipe string dan 'huruf' bertipe char. Pertama, kalimat diurutkan menggunakan fungsi 'sort()' melalui library 'algorithm'. Selanjutnya, dilakukan inisialisasi variabel awal, akhir, dan tengah untuk menentukan rentang pencarian. Melakukan iterasi Binary Search dengan menggeser awal dan akhir hingga awal tidak lagi kurang dari atau sama dengan akhir. Selama iterasi, diuji apakah 'huruf' yang dicari ada di tengah rentang saat ini. Jika 'huruf' ditemukan, program akan mencetak bahwa 'huruf' tersebut ditemukan dalam kalimat. Jika 'huruf' tidak ditemukan, program akan mencetak bahwa 'huruf' tersebut tidak ditemukan dalam kalimat.

Mendefinisikan fungsi 'SearchVokal' untuk menghitung jumlah huruf vokal dalam kalimat. Di dalam fungsi tersebut, melakukan iterasi setiap karakter kalimat. Karakter dalam kalimat diubah menjadi huruf kecil menggunakan fungsi 'tolower()'. Jika karakter tersebut adalah salah satu huruf vokal ('a', 'e', 'i', 'o', 'u'), maka jumlah huruf vokal akan bertambah. 

Terakhir, membuat fungsi utama 'main' untuk memasukkan sebuah kalimat dan sebuah huruf yang ingin dicari, memanggil fungsi BinarySearch untuk mencari huruf yang dimasukkan dalam kalimat, memanggil fungsi SearchVokal untuk menghitung jumlah huruf vokal dalam kalimat, dan mencetak banyaknya huruf vokal tersebut.

### Full Code Screenshot
![unguided2](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/29c40294-80bd-4f4f-badf-d8521b71c83b)

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10; // Jumlah elemen dalam data array
    int data[n] = { 9, 4, 1, 4, 7, 10, 5, 4, 12, 4}; // Data array
    int cari = 4; // Nilai yang ingin dicari
    bool ketemu = false;
    int i;
    int count = 0; // Variabel untuk menghitung jumlah kemunculan nilai yang dicari

    // Algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            count++; // Tambahkan penghitungan setiap kali nilai yang dicari ditemukan
        }
    }

    cout << "\t Program Mencari Nilai 4 Menggunakan Algoritma Sequential Search\n" << endl;
    cout << "Data : { 9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;

    if (ketemu) {
        cout << "\nAngka " << cari << " ditemukan sebanyak " << count << " kali." << endl;
    } else {
        cout << "Angka " << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```
#### Output:
![Screenshot (530)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/cd6d2907-7fab-40e4-a912-5ec55a90eace)
### Penjelasan
Program diatas merupakan program untuk menghitung seberapa banyak angka 4 pada data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4 menggunakan algoritma sequential search.

Program dimulai dengan memanggil library iostream untuk I/O. Selanjutnya, membuat fungsi utama 'main' yang terdiri dari deklarasi dan inisialisasi n=10, data[n] = { 9, 4, 1, 4, 7, 10, 5, 4, 12, 4}, cari = 4, iterasi 'i', count = 0. Membuat program sequential search dengan perulangan 'for'. Jika cari ditemukan, maka ketemu=true. Jika cari tidak ditemukan, maka menambah perhitungan selanjutnya sampai data[i]==cari. 

Melakukan pengecekan apakah nilai yang dicari ditemukan: Jika ditemukan, mencetak berapa kali nilai tersebut muncul dalam array. Jika tidak ditemukan, mencetak pesan bahwa nilai tersebut tidak ditemukan.

### Full Code Screenshot
![unguided3](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/df47b47f-13fd-41b9-b718-9ff200f5c50d)

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar macam-macam algoritma untuk pencarian suatu hal tertentu(searching). Algoritma searching sendiri berjalan dengan menerima sebuah argumen kunci dan langkah-langkah tertentu yang akan mencari data yang disimpan dengan kunci tersebut. Setelah proses dilaksanakan, kemungkinannya adalah data ditemukan (successful) atau tidak ditemukan (unsuccessful) [1]. Dalam algoritma pencarian, terdapat dua jenis yaitu pencarian berurutan (sequential search) dan pencarian bagi dua (binary search).

#### Pelajaran yang didapat
Searching adalah sebuah algoritma dengan menerima sebuah argumen kunci dan langkah-langkah tertentu yang akan mencari data yang disimpan dengan kunci tersebut. Terdapat dua jenis algoritma searching. Pertama, sequential search  yang berjalan dengan membandingkan setiap elemen array satu per satu secara beruntun dimulai dari elemen pertama hingga elemen yang dicari ditemukan atau hingga elemen terakhir array. Kedua, binary search dengan cara pencarian data pada array yang sudah terurut, karena salah satu syarat dalam Binary Search adalah data sudah dalam keadaan terurut. Dengan kata lain apabila data belum dalam keadaan terurut, pencarian Binary tidak dapat dilakukan.

## Referensi
[1] Ken Kinanti P, “Algoritma & Pemrograman”, 2011.

<<<<<<< HEAD
[2] Ali Akbar Rismayadi, Liah Jamaliah, "IMPLEMENTASI ALGORITMA SEQUENTIAL SEARCHING PADA APLIKASI E-OFFICE", 2019.
=======
[2] Ali Akbar Rismayadi, Liah Jamaliah, "IMPLEMENTASI ALGORITMA SEQUENTIAL SEARCHING PADA APLIKASI E-OFFICE", 2019.
>>>>>>> a828054 (push modul 5)
