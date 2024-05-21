# <h1 align="center">Laporan Praktikum Modul Stack & Queue</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
### STACK
Stack atau tumpukan adalah suatu stuktur data yang penting dalam pemrograman dengan metode pemrosesan yang bersifat LIFO (Last In First Out) dimana objek/benda yang terakhir masuk ke dalam stack akan menjadi benda pertama yang dikeluarkan dari stack. Dengan model demikian, maka hanya bagian paling atas saja dari stack (TOP) yang bisa di akses. Salah satu kelebihan stack adalah bahwa struktur data tersebut dapat diimplementasikan baik pada array maupun pada linked list [1].
![Screenshot 2024-05-17 202903](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/dbe7b443-ce64-496a-8709-9f23209191d5)

Adapuu operasi-operasi/fungsi yang dapat dilakukan pada stack adalah sebagai berikut :
<pre>
1. Push : digunakan untuk menambah item pada stack pada tumpukan paling atas.
2. Pop : digunakan untuk mengambil item pada stack pada tumpukan paling atas.
3. Clear : digunakan untuk mengosongkan stack.
4. IsEmpty : fungsi yang digunakan untuk mengecek apakah stack sudah kosong.
5. IsFull : fungsi yang digunakan untuk mengecek apakah stack sudah penuh.
</pre>

### QUEUE
Queue atau antrian adalah suatu jenis struktur data yang dapat diproses dengan sifat FIFO (First In First Out), dimana elemen yang pertama kali masuk ke antrian akan keluar pertama kali. Ada dua jenis operasi yang bisa dilakukan di antrian: enqueue (memasukkan elemen baru ke dalam elemen) dan dequeue (adalah mengeluarkan satu elemen dari suatu antrian). Antrian dapat dibuat dengan menggunakan: Linear Array dan Circular Array [2].
<pre>
Operasi pada Queue
1. enqueue() : menambahkan data ke dalam queue.
2. dequeue() : mengeluarkan data dari queue.
3. peek() : mengambil data dari queue tanpa menghapusnya.
4. isEmpty() : mengecek apakah queue kosong atau tidak.
5. isFull() : mengecek apakah queue penuh atau tidak.
6. size() : menghitung jumlah elemen dalam queue.
</pre>

## Guided
### 1. PROGRAM STACK
```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```
### Penjelasan
Program ini akan menambahkan beberapa buku ke dalam stack, mencetaknya, kemudian menunjukkan apakah stack penuh atau kosong. Selanjutnya, program akan menunjukkan data pada posisi tertentu dalam stack, menghapus satu item dari stack, mengubah data pada posisi tertentu, mencetak ulang stack setelah perubahan, menghapus semua data dari stack dan mencetak ulang stack setelah semua data dihapus.

Pertama, program dimulai dengan mengimport library 'iostream' untuk I/O. Selanjutnya, 
menginisialisasi 'string arrayBuku[5]' yang digunakan untuk menyimpan elemen stack dengan kapasitas 5 elemen. maksimal = 5 untuk Kapasitas maksimal stack. top = 0 untuk pointer yang menunjukkan posisi elemen teratas di stack. Membuat fungsi 'isFull()' untuk mengecek apakah stack penuh dengan membandingkan 'top' dengan 'maksimal'. Membuat fungsi 'isEmpty()' untuk mengecek apakah stack kosong dengan memeriksa apakah 'top' bernilai 0. Membuat fungsi 'pushArrayBuku(string data)' untuk menambahkan elemen baru ke stack. Membuat fungsi 'popArrayBuku()' untuk menghapus elemen teratas dari stack. Membuat fungsi 'peekArrayBuku(int posisi)' untuk melihat elemen di posisi tertentu dari atas stack. Membuat fungsi 'countStack()' untuk mengembalikan jumlah elemen dalam stack dengan mengembalikan nilai 'top'. Membuat fungsi 'changeArrayBuku(int posisi, string data)' untuk mengubah elemen di posisi tertentu. Membuat fungsi 'destroyArraybuku()' untuk menghapus semua elemen dalam stack. Membuat fungsi 'cetakArrayBuku()' untuk mencetak semua elemen dalam stack dari yang teratas hingga yang terbawah.

Terakhir, membuat fungsi utama 'main()' untuk menguji fungsi-fungsi stack yang telah dibuat.

### PROGRAM QUEUE
```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
### PENJELASAN
Program diatas adalah program antrian (queue). Antrian adalah struktur data yang mengikuti prinsip FIFO (First In, First Out), di mana elemen pertama yang masuk adalah elemen pertama yang keluar. 

Pertama-tama mengimport library 'iostream' untuk input/output. Selanjutnya, mendeklarasi dan inisialisasi 'const int maksimalQueue = 5' untuk kapasitas maksimal antrian. 'int front = 0' untuk pointer yang menunjukkan elemen depan antrian. 'int back = 0' untuk pointer yang menunjukkan elemen belakang antrian. 'string queueTeller[5]' untuk array yang digunakan untuk menyimpan elemen antrian. Membuat fungsi 'isFull()' untuk mengecek apakah antrian penuh dengan membandingkan 'back' dengan 'maksimalQueue'. Membuat fungsi 'isEmpty()' untuk mengecek apakah antrian kosong dengan memeriksa apakah 'back' bernilai 0. Membuat fungsi 'enqueueAntrian(string data)' untuk menambahkan elemen baru ke antrian. Membuat fungsi "dequeueAntrian()" untuk menghapus elemen terdepan dari antrian. Membuat fungsi 'countQueue()' unutk mengembalikan jumlah elemen dalam antrian dengan mengembalikan nilai 'back'. Membuat fungsi 'clearQueue()' untuk menghapus semua elemen dalam antrian. Membuat fungsi 'viewQueue()' untuk mencetak semua elemen dalam antrian.

Terakhir, membuat fungsi utama 'main()' untuk menguji fungsi-fungsi antrian yang telah dibuat.

## Unguided
### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.
```C++
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string kalimat) {
    int awal = 0;
    int akhir = kalimat.length() - 1;

    while (awal < akhir) {
        if (kalimat[awal] != kalimat[akhir]) {
            return false;
        }
        awal++;
        akhir--;
    }
    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
```
#### Output:
![Screenshot (664)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/3227d280-5e32-4129-8600-11d87835c04d)
### Penjelasan
Program di atas merupakan program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama

Program dimulai dengan memanggil library 'iostream' untuk I/O, library 'string' untuk menggunakan tipe data string. Kemudian, membuat fungsi 'isPalindrome' bertipe data boolean dengan parameter 'kalimat' bertipe data string. Dua variabel 'awal' dan 'akhir' di inisialisasi untuk melacak indeks karakter dari awal dan akhir string. Membuat perulangan while, karakter pada posisi 'awal' dibandingkan dengan karakter pada posisi 'akhir'. Jika ada perbedaan, fungsi mengembalikan 'false' yang berarti string tersebut bukan palindrom. Jika semua pasangan karakter sesuai, 'awal' dan 'akhir' mendekati tengah string, dan akhirnya fungsi mengembalikan 'true' jika tidak ada ketidakcocokan ditemukan. 

Terakhir, membuat fungsi utama 'main()' yang mendeklarasikan variabel 'kalimat' bertipe data string. Program meminta pengguna untuk memasukkan kalimat dengan menggunakan 'cout' dan getline(cin, kalimat) untuk membaca seluruh baris input termasuk spasi. Kalimat yang dimasukkan pengguna kemudian diperiksa apakah palindrom dengan memanggil fungsi 'isPalindrome'. Berdasarkan hasil dari fungsi 'isPalindrome', program akan mencetak apakah kalimat tersebut adalah palindrom atau bukan.

### Full Code Screenshot
![unguided6](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/95275286-87e9-459f-91b8-8a413c19a70b)

### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu
```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    return back == maksimalQueue;
}

bool isEmpty() { // Antrian kosong atau tidak
    return back == 0;
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        queueTeller[back] = data;
        back++;
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back - 1; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        queueTeller[back - 1] = "";
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Tambah Antrian" << endl;
    cout << "2. Hapus Antrian" << endl;
    cout << "3. Lihat Antrian" << endl;
    cout << "4. Jumlah Antrian" << endl;
    cout << "5. Hapus Semua Antrian" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main() {
    int choice;
    string data;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama: ";
                cin >> data;
                enqueueAntrian(data);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 5:
                clearQueue();
                break;
            case 6:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
        cout << endl; // Untuk membuat jarak antara iterasi menu
    } while (choice != 6);

    return 0;
}
```
#### Output:
![Screenshot (665)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/2358c618-80fe-4efb-8c45-8a9d138eac06)
### Penjelasan
Program di atas merupakan program dari queue yang mengimplementasikan beberapa operasi dasar antrian (queue), seperti menambahkan elemen ke antrian (enqueue), menghapus elemen dari antrian (dequeue), melihat isi antrian, menghitung jumlah elemen dalam antrian, mengosongkan antrian, dan menampilkan menu pilihan untuk interaksi pengguna.

Program dimulai dengan memanggil library 'iostream' untuk input/output. Kemudian, mendeklarasikan 'maksimalQueue=5'. 'front' dan 'back' adalah penanda posisi depan dan belakang antrian, yang diinisialisasi ke 0. "queueTeller" adalah array string yang menyimpan elemen antrian. Membuat fungsi 'isFull()' untuk memeriksa apakah antrian sudah penuh dengan membandingkan 'back' dengan 'maksimalQueue'. Membuat fungsi 'isEmpty()' untuk memeriksa apakah antrian kosong dengan memeriksa apakah back bernilai 0. Membuat fungsi 'enqueueAntrian()' untuk menambahkan elemen baru ke antrian. Jika antrian penuh, mencetak pesan "Antrian penuh". Jika tidak penuh, menambahkan 'data' ke posisi 'back' dan menginkrementasi 'back'. Membuat fungsi 'dequeueAntrian()' untuk menghapus elemen dari antrian. Membuat fungsi 'countQueue()' untuk mengembalikan jumlah elemen dalam antrian dengan mengembalikan nilai 'back'. Membuat fungsi 'clearQueue()' untuk mengosongkan seluruh antrian. Membuat fungsi 'viewQueue()' untuk menampilkan semua elemen dalam antrian. Membuat fungsi 'displayMenu()' untuk menampilkan menu pilihan untuk pengguna.

Terakhir, membuat fungsi utama 'main()' untuk memilih berdasarkan pilihan pengguna, program akan memanggil fungsi yang sesuai untuk melakukan operasi antrian. 

### Full Code Screenshot
![unguided7](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/23356bfe-1479-431c-b2bf-13774a38fe1b)

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar struktur data yang bernama stack dan queue. Stack merupakan tumpukan dan bersifat LIFO (Last In First Out) yang artinya data yang terakhir masuk adalah data yang pertama keluar. Sedangkan queue merupakan antrian dan bersifat FIFO (First In First Out) yang artinya data yang pertama masuk akan pertama kali keluar.

#### Pelajaran yang didapat
Stack adalah struktur data yang menggunakan prinsip LIFO (Last In First Out), di mana elemen yang terakhir masuk akan menjadi yang pertama keluar. Dalam stack, hanya elemen paling atas yang bisa diakses. Stack dapat diimplementasikan menggunakan array atau linked list. Operasi dasar pada stack meliputi penambahan item ke bagian atas (push), pengambilan item dari bagian atas (pop), pengosongan stack (clear), serta pengecekan apakah stack kosong (isEmpty) atau penuh (isFull).

Queue adalah struktur data yang bekerja dengan prinsip FIFO (First In First Out), di mana elemen yang pertama masuk akan menjadi yang pertama keluar. Operasi dasar pada queue mencakup penambahan elemen baru (enqueue), pengeluaran elemen (dequeue), pengambilan elemen tanpa menghapusnya (peek), pengecekan apakah queue kosong (isEmpty) atau penuh (isFull), dan penghitungan jumlah elemen dalam queue (size). Queue dapat diimplementasikan menggunakan Linear Array atau Circular Array.

## Referensi
[1] Johnson Sihombing, “PENERAPAN STACK DAN QUEUE PADA ARRAY DAN LINKED LIST DALAM JAVA”, 2019. 

[2] Rizaldy Gunawan, Haris Yuana, Sabitul Kirom,"IMPLEMENTASI METODE QUEUE PADA SISTEM ANTRIAN ONLINE BERBASIS WEB STUDI KASUS UPTD PUSKESMAS SANANWETAN", 2023.