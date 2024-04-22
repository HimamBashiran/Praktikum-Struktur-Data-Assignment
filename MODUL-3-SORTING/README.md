# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
Algoritma adalah kumpulan langkah sistematis untuk memperoleh hasil yang diinginkan. Sebelum sebuah algoritma dijalankan, biasanya ada suatu kondisi awal (initial state) yang harus dipenuhi. Kemudian, langkah-langkah ini diproses hingga mencapai suatu kondisi akhir (final state). Sorting didefinisikan sebagai pengurutan sejumlah data berdasarkan nilai kunci tertentu. Pengurutan dapat dilakukan dari nilai terkecil ke nilai terbesar (ascending) atau sebaliknya (descending) [1]. Dalam pertemuan kali ini, kita akan membahas tiga algoritma sorting, yaitu buble sort, selection sort, dan insertion sort.

### 1. BUBLE SORTING
Algoritma Bubble  Sort adalah  salah  satu  dari  beberapa  jenis  sorting  yang digunakan untuk  mengurutkan  data. Cara  kerja  algoritma  ini  adalah  mengulang  proses, melakukan  perbandingan antara setiap elemen array dan melakukan penggantian posisi jika urutannya sudah benar. Perbandingan setiap elemen dari array ini berlanjut berjalan sampai kondisi yang ditentukan terpenuhi [2].

Contoh prosedur buble sort dalam bahasa C++
```C++
#include<iostream>
using namespace std;

void buble_sort(int arr[], int length){
    bool not_sorted = true;
    int j=0, tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i=0; i < length - j; i++>){
            if (arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                not_sorted = true;
            }// end of if
        }// end of for loop
    }// end of while loop
}// end of bubble_sort
```

### 2. SELECTION SORTING
Algoritma selection sort adalah salah satu algoritma pengurutan sederhana yang beroperasi dengan cara memilih elemen terkecil dari daftar dan menukarnya dengan elemen pertama. Kemudian, ia akan  memilih  elemen  terkecil  dari  sisa  daftar  dan  menukarnya  dengan  elemen  kedua,  dan seterusnya, hingga seluruh daftar terurut [3].

Contoh prosedur selection sort dalam bahasa C++
```C++
#include<iostream>
using namespace std;

void SelectSort(arr[], int n){
    int pos_main, temp;
    for (int i=0; i< n-1; i++){
        pos_min = i;
        for (int j=i+1; j < n; j++){
            if (arr[j] > arr[pos_min])
            pos_min=j;
        }
        if (pos_min != i) {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
```

### 3. INSERTION SORTING
Algoritma insertion sort disebut-sebut sebagai metode pertengahan. Artinya, metode ini memiliki kecepatan rata-rata antara metode primitif (bubble dan selection) dan modern (merge dan quick). Metode ini, didasarkan pada sebuah kunci yang diambil pada elemen ke-2  pada sebuah larik, lalu menyisipkan elemen tersebut jika kondisi percabangan terpenuhi. Metode penyisipan (insertion) bertujuan untuk menjadikan bagian sisi kiri larik terurutkan sampai dengan seluruh larik berhasil diurutkan [4].

Contoh prosedur insertion sort dalam bahasa C++
```C++
#include<iostream>
using namespace std;

void insertion_sort(int arr[], int length){
    int i,j,tmp;

    for (int i = 1; i < length; i++){
        j = i;

        while  (j > 0 && arr[j - 1] > arr[j]){
            tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}
```

## Guided

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;
    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
                }//end of if
            }//end of for loop
        }//end of while loop
    }//end of bubble_sort
    void print_array(double a[], int length) {
        for(int i=0; i<length; i++) {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
    int main() {
        int length = 6;
        double a[] = {22.1, 15.3, 8.2, 33.21, 99.99,99.99};
        cout << "Urutan bilangan sebelum sorting: " << endl;
        print_array(a, length);
        bubble_sort(a, length);
        cout << "\nUrutan bilangan setelah sorting: " << endl;
        print_array(a, length);

        return 0;
    }
```
### Penjelasan
Program di atas merupakan program untuk mengurutkan data numerik bertipe double dari kecil ke besar (ascending) menggunakan algoritma buble sorting.

Pertama, mengimpor library iostream dan membuat fungsi buble_sort untuk menerima 'arr' bertipe double serta panjang length sebagai argumennya. Variabel 'not_sorted' digunakan sebagai penanda apakah array masih perlu disortir atau tidak. Variabel 'j' digunakan untuk mengurangi jumlah perbandingan pada setiap iterasi loop. Dua loop digunakan: loop 'while' eksternal berjalan selama array belum sepenuhnya tersortir (not_sorted masih true), dan 'loop' for internal untuk membandingkan elemen-elemen berturut-turut. Jika elemen pada posisi i lebih besar dari elemen pada posisi i+1, mereka ditukar. Penanda 'not_sorted' diatur kembali ke true untuk melanjutkan pengurutan. 

Membuat fungsi 'print_array" untuk menerima array 'a' dan panjangnya 'length'. Kemudian diatur dan dipanggil pada fungsi 'main'.

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara descending menggunakan algoritma insertion sort
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;
    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] < arr[j]) { // Perubahan terjadi di sini
            // Menukar elemen
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

// Fungsi untuk mencetak isi array
void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    int length = 6; // Jumlah elemen dalam array
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi insertion_sort untuk mengurutkan array secara descending
    insertion_sort(a, length);
    
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);

    return 0;
}
```
### Penjelasan
Program di atas merupakan program untuk mengurutkan karakter secara descending (terbesar hingga terkecil) menggunakan algoritma insertion sorting.

Pertama, mengimpor library iostream dan lanjut membuat fungsi insertion_sort untuk menerima 'arr' bertipe char dan panjang 'length'. Pada setiap iterasi 'i' dipindahkan ke posisi yang sesuai dalam subarray yang sudah terurut sebelumnya. Perubahan akan terjadi di perulangan 'while' dimana karakter akan diurutkan secara descending. Jika elemen sebelumnya ('arr[j-1]') lebih kecil dari elemen saat ini ('arr[j]'), maka elemen tersebut ditukar. 

Kemudian membuat fungsi 'print_array' untuk menerima array 'a' dan panjangnya 'length'. Serta fungsi 'main' untuk mengatur dan memanggil fungsi-fungsi sebelumnya. 

## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! (Score: 30)

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara descending menggunakan algoritma selection sort
void selection_sort_descending(float arr[], int n) {
    int current_max;
    float tmp;

    // Perulangan untuk iterasi melalui elemen array
    for (int i = 0; i < n - 1; i++) {
        current_max = i;

        // Perulangan mencari nilai maksimum di dalam array
        for (int current_item = i + 1; current_item < n; current_item++) {
            if (arr[current_item] > arr[current_max]) {
                current_max = current_item;
            }
        }

        // Percabangan jika posisi maksimum bukanlah posisi saat ini, tukar nilai elemen
        if (current_max != i) {
            tmp = arr[i];
            arr[i] = arr[current_max];
            arr[current_max] = tmp;
        }
    }
}

int main() {
    // Deklarasi array serta jumlah elemen yang akan diurutkan
    int n = 5;
    float arr[] = {3.8, 2.9, 3.3, 4.0, 2.4};

    // Menampilkan array sebelum diurutkan secara descending
    cout << "Array sebelum diurutkan secara descending: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Memanggil fungsi selection_sort_descending untuk mengurutkan array secara descending
    selection_sort_descending(arr, n);

    // Menampilkan array setelah diurutkan secara descending
    cout << "Array setelah diurutkan secara descending: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
```
#### Output:
![Screenshot (516)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/270a1aaf-04dc-41fe-b456-f46b7bab2297)
### Penjelasan
Program di atas merupakan program untuk mengurutkan Indeks Prestasi Semester mahasiwa kelas S1 IF 2016 G dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort. 

Program dimulai dengan mendefinisikan fungsi 'selection_sort_descending' yang mengandung parameter 'arr' yang akan diurutkan dan integer 'n' sebagai jumlah elemen dalam array. Di dalam fungsi tersebut, terdapat dua perulangan: 'for' loop pertama digunakan untuk iterasi melalui setiap elemen array, kecuali elemen terakhir. 'for' loop kedua digunakan untuk mencari nilai maksimum di dalam array, dimulai dari indeks setelah elemen saat ini hingga elemen terakhir. Jika nilai elemen yang sedang dicek lebih besar dari nilai elemen maksimum yang sudah ditentukan sebelumnya (arr[current_item] > arr[current_max]), maka nilai current_max diupdate dengan indeks elemen tersebut. Jika nilai maksimum tidak berada pada posisi elemen saat ini (current_max != i), maka nilai elemen pada posisi current_max dan i ditukar.

Terakhir, mendefinisikan fungsi 'main' yang di dalamnya terdapat sebuah array dengan 5 elemen float diinisialisasikan. Kemudian memanggil fungsi 'selection_sort_descending' untuk mengurutkan IPS mahasiswa secara descending.

### Full Code Screenshot
![unguided1](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/3cf0a41e-dde0-4dd5-a96c-03e9165acd63)

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! (Score: 30)

```C++
#include <iostream>
#include <string>
using namespace std;

void buble_sort(string arr[], int length){
    bool not_sorted = true;
    int j = 0;
    string tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
                }//end of if
            }//end of for loop
        }//end of while loop
    }//end of bubble_sort
    void print_array(string a[], int length) {
        for(int i=0; i<length; i++) {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
    int main() {
        int length = 10;
        string a[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
        cout << "Urutan nama sebelum di sorting: " << endl;
        print_array(a, length);

        buble_sort(a, length);

        cout << "\nUrutan nama setelah di sorting: " << endl;
        print_array(a, length);

        return 0;
    }
```
#### Output:
![Screenshot (517)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/7adfdd05-5b85-451a-913d-b298009047ac)
### Penjelasan
Program diatas merupakan program yang dirancang untuk mengurutkan nama-nama 10 warga sesuai alfabet menggunakan algoritma buble sort.

Program dimulai dengan memanggil library iostream untuk I/O dan library 'string' untuk menggunakan tipe data srting. Selanjutnya, membuat fungsi 'buble_sort' yang mengandung parameter array 'arr' bertipe string dan 'length' bertipe integer. Dalam blok program while, program membandingkan elemen saat ini 'arr[i]' dengan elemen berikutnya 'arr[i + 1]', Jika elemen saat ini lebih besar dari elemen berikutnya maka tukar. 

Lanjut membuat fungsi 'print_array' yang mengandung parameter 'a' untuk menyimpan array dan 'length' untuk panjang array yang nantinya digunakan untuk menampilkan array.

Terakhir, membuat fungsi 'main' untuk memanggil fungsi-fungsi sebelumnya termasuk mengurutkan nama-nama warga sesuai alfabet dengan algoritma buble sort.

### Full Code Screenshot
![unguided2](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/e8bcf756-e10b-447b-b310-e19a39d849d6)

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! (Score: 40)

```C++
#include <iostream>
using namespace std;

// Fungsi untuk mengurutkan array secara ascending menggunakan algoritma insertion sort
void insertion_sort_ascending(char arr[], int length) {
    int i, j;
    char tmp;
    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] > arr[j]) { // Perubahan terjadi di sini
            // Menukar elemen
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}
// Fungsi untuk mengurutkan array secara descending menggunakan algoritma insertion sort
void insertion_sort_descending(char arr[], int length) {
    int i, j;
    char tmp;
    for (i = 1; i < length; i++) {
        j = i;

        // Membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] < arr[j]) { // Perubahan terjadi di sini
            // Menukar elemen
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}

// Fungsi untuk mencetak isi array
void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    // Meminta user untuk memasukkan jumlah karakter
    int length;
    cout << "Masukkan jumlah karakter yang ingin di input: ";
    cin >> length;

    // Membuat array 'a' dengan panjang sejumlah karakter yang dimasukkan user
    char a[length];

    // Meminta user untuk memasukkan karakter-karakter sebanyak 'length'
    cout << "Masukkan " << length << " karakter" << endl;
    for (int i = 0; i < length; ++i){
        cout << "karakter ke-" << i+1 << ": ";
        cin >> a[i];
    }

    cout << "\nUrutan karakter sebelum di sorting: " << endl;
    print_array(a, length);

    // Memanggil fungsi insertion_sort_ascending untuk mengurutkan array secara ascending
    insertion_sort_ascending(a, length);

    cout << "\nUrutan karakter setelah di sorting secara ascending: " << endl;
    print_array(a, length);

    // Memanggil fungsi insertion_sort_descending untuk mengurutkan array secara descending
    insertion_sort_descending(a, length);
    cout << "\nUrutan karakter setelah di sorting secara descending: " << endl;
    print_array(a, length);

    return 0;
}
```
#### Output:
![Screenshot (519)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/1b278bfc-f7b3-4ae3-8db6-793c8295b8e9)
### Penjelasan
Program diatas merupakan program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending) dengan menggunakan aloritma insertion sort.

Program dimulai dengan memanggil library iostream untuk I/O. Selanjutnya, membuat dua fungsi, yaitu fungsi 'insertion_sort_ascending' untuk mengurutkan array secara ascending (kecil ke besar) dan fungsi 'insertion_sort_descending' untuk mengurutkan array secara descending (besar ke kecil) dengan masing-masing memiliki parameter 'arr' bertipe data char dan 'length' bertipe data integer. 

Kemudian, membuat fungsi 'print_array' untuk menampilkan isi array 'a' dengan panjang 'length'. Dan terakhir, membuat fungsi utama 'main' untuk meminta user memasukkan jumlah karakter, memasukkan karakter-karakter tersebut, memanggil fungsi-fungsi sebelumnya untuk mengurutkan secara ascending maupun descending.

### Full Code Screenshot
![unguided3](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/6aef00f1-0d2b-4b16-8511-60170149085e)

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar macam-macam algoritma untuk mengurutkan suatu hal tertentu(sorting). Sorting sendiri dapat didefinisikan sebagai pengurutan sejumlah data berdasarkan nilai kunci tertentu. Pengurutan dapat dilakukan dari nilai terkecil ke nilai terbesar (ascending) atau sebaliknya (descending). Berbagai macam tipe algoritma sorting, mulai dari buble sorting, selection sorting, hingga yang paling efektif adalah insertion sorting.

#### Pelajaran yang didapat
Sorting adalah proses pengurutan atau penyusunan data dalam suatu urutan tertentu, baik itu dari yang terkecil ke yang terbesar (ascending) maupun sebaliknya (descending). Terdapat berbagai macam algoritma sorting yang dapat digunakan, seperti buble sorting, selection sorting, maupun insertion sorting, yang memiliki kelebihan dan kekurangan masing-masing tergantung pada kondisi dan ukuran data yang diurutkan.

## Referensi
[1] Wahyu Fahmy Wisudawan, “Kompleksitas Algoritma Sorting yang Populer Dipakai”, 2008.

[2] Muhammad Farhan Abdullah, Isna Hafiza, Rama Wahyuni, Adrian Syahputra, “Penggunaan Algoritma Bubble Sortdalam Pengurutan Nomor Induk Mahasiswa”, 2023.

[3] Nanang Mahrozi, Muhammad Faisal, "ANALISIS PERBANDINGAN KECEPATAN ALGORITMA SELECTION SORTDANBUBBLE SORT", 2023.

[4] Arief Hendra Saptadi, Desi Windi Sari, "ANALISIS ALGORITMA INSERTION SORT, MERGE SORT DAN IMPLEMENTASINYA DALAM BAHASA PEMROGRAMAN C++", 2012.
