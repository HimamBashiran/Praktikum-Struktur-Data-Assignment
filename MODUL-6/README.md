# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
Linked list adalah suatu bentuk struktur data yang berupa sekumpulan elemen data yang bertipe sama dimana tiap elemen saling berkaita atau dihubungkan dengan elemen lain melalui suatu pointer. Pointer itu sendiri adalah alamat elemen data yang tersimpan di memori. Penggunaan pointer untuk mengacu elemen berakibat elemen-elemen bersebelahan secara logik walau tidak bersebelahan secara fisik di memori [1].
Berdasarkan jenis operasinya, terdapat dua algoritma Linked List, yaitu:

### Single Linked List
Single Linked List adalah suatu kumpulan elemen data (yang disebut sebagai node) dimana urutannya ditentukan oleh suatu pointer. Single Linked List hanya memiliki 1 (satu) petunjuk/pointer (NEXT). Setiap elemen (node) dari suatu linked list terdiri atas dua bagian, yaitu :
<pre>
1. INFO: berisi informasi tentang elemen data yang bersangkutan.
2. NEXT(link field/next pointer field): berisi alamat dari elemen (node) selanjutnya yang dituju [2].
</pre>

### Double Linked List
Pada Double Linked List, struktur data atas tiap-tiap node memiliki rujukan pada node sebelum (PREV) dan berikutnya (NEXT). Sebagian algoritma membutuhkan taut ganda, contohnya sorting dan reverse traversing. Tiap node memiliki pointer yang menunjuk ke node sesudahnya dan pointer yang menunjuk ke node sebelumnya [2].
![Screenshot 2024-05-10 111411](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/61a50fae-aeb7-4ce8-9a79-290882dc43e8)

## Guided
### 1. PROGRAM SINGLE LINKED LIST NON-CIRCULAR
```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
        return true;
    else
        return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```
### Penjelasan
Program diatas merupakan program single linked list non-circular yang mencakup pengaplikasian untuk insert depan, insert tengah, insert belakang, hapus depan, hapus tengah, hapus belakang, ubah depan, ubah tengah, ubah belakang. 

Program dimulai dengan mengimpor library 'iostream' untuk input/output. Kemudian, mendefinisikan sebuah struct bernama 'Node' yang memiliki dua member, yaitu 'data' untuk menyimpan nilai dan 'next' untuk menunjuk ke node berikutnya. Dan mendeklarasikan dua pointer global, yaitu 'head' dan 'tail', yang digunakan untuk menunjuk ke node pertama dan terakhir dalam linked list. Fungsi 'init()' digunakan untuk menginisialisasi head dan tail menjadi NULL. Fungsi 'isEmpty()' digunakan untuk memeriksa apakah linked list kosong atau tidak. Fungsi 'insertDepan(int nilai)' digunakan untuk menambahkan node baru di depan linked list. Fungsi 'insertBelakang(int nilai)' digunakan untuk menambahkan node baru di belakang linked list. Fungsi 'hitungList()' digunakan untuk menghitung jumlah node dalam linked list. Fungsi 'insertTengah(int data, int posisi)' digunakan untuk menambahkan node baru di posisi tengah tertentu dalam linked list. Fungsi 'hapusDepan()' digunakan untuk menghapus node pertama dari linked list. Fungsi 'hapusBelakang()' digunakan untuk menghapus node terakhir dari linked list. Fungsi 'hapusTengah(int posisi)' digunakan untuk menghapus node pada posisi tengah tertentu dalam linked list. Fungsi 'ubahDepan(int data)' digunakan untuk mengubah nilai data pada node pertama. Fungsi 'ubahTengah(int data, int posisi)' digunakan untuk mengubah nilai data pada node di posisi tengah tertentu. Fungsi 'ubahBelakang(int data)' digunakan untuk mengubah nilai data pada node terakhir. Fungsi 'clearList()' digunakan untuk menghapus seluruh node dalam linked list. Fungsi 'tampil()' digunakan untuk menampilkan isi dari linked list. 

Terakhir, membuat fungsi utama 'main()', beberapa operasi dasar pada linked list dipanggil secara berurutan untuk menguji implementasi yang telah dibuat.

### 2. PROGRAM DOUBLE LINKED LIST
```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) { //tambahdepan
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add " << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
### Penjelasan
Program diatas merupakan program double linked list.  Double linked list mirip dengan single linked list, namun setiap node dalam double linked list memiliki dua pointer: satu untuk menunjuk ke node sebelumnya (prev) dan satu untuk menunjuk ke node berikutnya (next).

Program dimulai dengan mengimpor library 'iostream' untuk input/output. Kemudian mendefinisikan sebuah kelas bernama 'Node' yang memiliki tiga atribut: 'data' untuk menyimpan nilai, 'prev' untuk menunjuk ke node sebelumnya, dan 'next' untuk menunjuk ke node berikutnya. Mendefinisikan sebuah kelas bernama 'DoublyLinkedList' yang memiliki atribut 'head' dan 'tail' yang merupakan pointer ke node pertama dan terakhir dalam linked list. Menginisialisasi 'head' dan 'tail' menjadi nullptr. Menambahkan node baru di depan linked list (mirip dengan 'insertDepan' pada implementasi single linked list). Node baru dibuat, dihubungkan dengan node sebelumnya (jika ada), kemudian diatur sebagai node pertama. Menghapus node pertama dari linked list (mirip dengan 'hapusDepan' pada implementasi single linked list). Node pertama dihapus, dan node berikutnya diatur sebagai node pertama baru. Mengubah nilai data dari node dengan nilai data tertentu. Fungsi ini mencari node dengan nilai data tertentu, kemudian mengubah nilainya jika ditemukan. Menghapus semua node dalam linked list. Fungsi ini menghapus setiap node satu per satu dan mengatur 'head' dan 'tail' menjadi nullptr. Membuat fungsi 'display()' untuk Menampilkan isi dari linked list. 

Terakhir, membuat fungsi utama 'main()', pengguna diberi pilihan untuk menambahkan data, menghapus data, mengubah data, menghapus semua data, menampilkan data, atau keluar dari program. Setiap pilihan diproses sesuai dengan operasi yang telah didefinisikan sebelumnya.

## Unguided
### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
![Screenshot 2024-05-10 150156](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/4606db9b-8b75-4d6e-a55f-d586795a31e6)
```C++
#include <iostream>
#include <string>

using namespace std;

// Struktur Node untuk menyimpan data nama dan usia
struct Node {
    string nama;
    int usia;
    Node* next; // Pointer ke node berikutnya
};

// Deklarasi pointer head untuk awal list
Node* head = nullptr;

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "\nPROGRAM SINGLE LINKED LIST NON-CIRCULAR\n";
    cout << "=========================================\n";
    cout << "1. Tambah Depan\n";
    cout << "2. Tambah Belakang\n";
    cout << "3. Tambah Tengah\n";
    cout << "4. Ubah Depan\n";
    cout << "5. Ubah Belakang\n";
    cout << "6. Ubah Tengah\n";
    cout << "7. Hapus Depan\n";
    cout << "8. Hapus Belakang\n";
    cout << "9. Hapus Tengah\n";
    cout << "10. Hapus List\n";
    cout << "11. TAMPILKAN\n";
    cout << "0. KELUAR\n";
    cout << "Pilih Operasi : ";
}

// Fungsi untuk menambahkan node di depan list
void tambahDepan(){
    string nama;
    int usia;
    cout << "\nMasukkan Nama : ";
    cin >> nama;
    cout << "Masukkan Usia : ";
    cin >> usia;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = head;
    head = newNode;

    cout << "Data " << nama << " telah ditambahkan di depan list.\n";
}

// Fungsi untuk menambahkan node di belakang list
void tambahBelakang() {
    string nama;
    int usia;
    cout << "\nMasukkan Nama : ";
    cin >> nama;
    cout << "Masukkan Usia: ";
    cin >> usia;

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "Data " << nama << " telah ditambahkan di belakang list.\n";
}

// Fungsi untuk menambahkan node di tengah list
void tambahTengah() {
    string nama;
    int usia;
    int posisi;

    cout << "\nMasukkan Nama : ";
    cin >> nama;
    cout << "Masukkan Usia : ";
    cin >> usia;
    cout << "Masukkan Posisi : ";
    cin >> posisi;

    if (posisi <= 0){
        cout << "Posisi tidak valid. Data tidak ditambahkan.\n";
        return;
    }

    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->usia = usia;

    int count = 1;
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr && count < posisi){
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr == nullptr) {
        cout << "Posisi melebihi jumlah node. Data tidak ditambahkan.\n";
    } else {
        newNode->next = curr;
        if (prev == nullptr) {
            head = newNode;
    } else {
        prev->next = newNode;
    }
    cout << "Data " << nama << " telah ditambahkan di tengah list (posisi " << posisi << ").\n";
    }
}

// Fungsi untuk mengubah data node di depan list
void ubahDepan() {
    if (head == nullptr) {
        cout << "List masih kosong. Tidak ada data yang diubah.\n";
        return;
    }

    string namaBaru;
    int usiaBaru;
    cout << "\nMasukkan Nama Baru : ";
    cin >> namaBaru;
    cout << "Masukkan Usia Baru : ";
    cin >> usiaBaru;

    head->nama = namaBaru;
    head->usia = usiaBaru;
    
    cout << "Data di depan telah diubah.\n";
}

// Fungsi untuk mengubah data node di belakang list
void ubahBelakang() {
    if (head == nullptr) {
        cout << "List masih kosong. Tidak ada data yang diubah.\n";
        return;
    }

    string namaBaru;
    int usiaBaru;
    cout << "\nMasukkan Nama Baru : ";
    cin >> namaBaru;
    cout << "Masukkan Usia Baru : ";
    cin >> usiaBaru;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->nama = namaBaru;
    temp->usia = usiaBaru;

    cout << "Data di belakang telah diubah.\n";
}

// Fungsi untuk mengubah data node di tengah list
void ubahTengah() {
    if (head == nullptr) {
        cout << "List masih kosong. Tidak ada data yang diubah.\n";
        return;
    }

    string namaBaru;
    int usiaBaru;
    int posisi;
    cout << "\nMasukkan Nama Baru : ";
    cin >> namaBaru;
    cout << "Masukkan Usia Baru : ";
    cin >> usiaBaru;
    cout << "Masukkan Posisi : ";
    cin >> posisi;

    if (posisi <= 0) {
        cout << "Posisi tidak valid. Tidak ada data yang diubah.\n";
        return;
    }

    int count = 1;
    Node* temp = head;
    while (temp != nullptr && count < posisi) {
        temp = temp->next;
        count++;
    }
    
    if (temp == nullptr) {
        cout << "Posisi melebihi jumlah node. Tidak ada data yang diubah.\n";
    } else {
        temp->nama = namaBaru;
        temp->usia = usiaBaru;
        cout << "Data pada posisi " << posisi << " telah diubah.\n";
    }
}

// Fungsi untuk menghapus node di depan list
void hapusDepan() {
    if (head == nullptr) {
        cout << "List masih kosong. Tidak ada data yang dihapus.\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    cout << "Data di depan telah dihapus.\n";
}

// Fungsi untuk menghapus node di belakang list
void hapusBelakang() {
    if (head == nullptr) {
        cout << "List masih kosong. Tidak ada data yang dihapus.\n";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while (temp->next != nullptr) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == nullptr) {
        head = nullptr;
    } else {
        prev->next = nullptr;
    }

    delete temp;
    cout << "Data di belakang telah dihapus.\n";
}

// Fungsi untuk menghapus node di tengah list
void hapusTengah() {
    if (head == nullptr) {
        cout << "List masih kosong. Tidak ada data yang dihapus.\n";
        return;
    }

    int posisi;
    cout << "Masukkan Posisi yang akan dihapus: ";
    cin >> posisi;

    if (posisi <= 0) {
        cout << "Posisi tidak valid. Tidak ada data yang dihapus.\n";
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int count = 1;

    while (temp != nullptr && count < posisi) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Posisi melebihi jumlah node. Tidak ada data yang dihapus.\n";
    } else {
        if (prev == nullptr) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }
    delete temp;
    cout << "Data pada posisi " << posisi << " telah dihapus.\n";
    }
}

// Fungsi untuk menghapus seluruh list
void hapusList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    cout << "Seluruh list telah dihapus.\n";
}

// Fungsi untuk menampilkan isi list
void tampilkan() {
    if (head == nullptr) {
        cout << "List kosong.\n";
    } else {
        cout << "Daftar Mahasiswa:\n";
        Node* temp = head;
        while (temp != nullptr) {
        cout << "Nama: " << temp->nama << ", Usia: " << temp->usia << endl;
        temp = temp->next;
        }
    }
}

// Fungsi utama
int main() {
    int choice;

    do {
        tampilkanMenu();
        cin >> choice;

    switch (choice) {
        case 1:
            tambahDepan();
            break;
        case 2:
            tambahBelakang();
            break;
        case 3:
            tambahTengah();
            break;
        case 4:
            ubahDepan();
            break;
        case 5:
            ubahBelakang();
            break;
        case 6:
            ubahTengah();
            break;
        case 7:
            hapusDepan();
            break;
        case 8:
            hapusBelakang();
            break;
        case 9:
            hapusTengah();
            break;
        case 10:
            hapusList();
            break;
        case 11:
            tampilkan();
            break;
        case 0:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Operasi tidak valid.\n";
        }
    } while (choice != 0);

    return 0;
}
```

#### Output:

### Penjelasan
Program di atas merupakan program untuk mengenai single linked list non-circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user.

Program dimulai dengan memanggil library 'iostream' untuk input/output, library 'string' untuk menggunakan tipe data string. Lalu, mendefinisikan sebuah struktur bernama 'Node' yang memiliki dua atribut, yaitu 'nama' (bertipe string) untuk menyimpan nama mahasiswa dan 'usia' (bertipe integer) untuk menyimpan usia mahasiswa. Selain itu, terdapat pointer 'next' untuk menunjuk ke node berikutnya. Mendeklarasikan pointer 'head' yang akan menunjuk ke node pertama dalam linked list. Pada awalnya, 'head' diinisialisasi menjadi nullptr. Menampilkan menu operasi yang dapat dilakukan pada linked list, seperti menambahkan data di depan, belakang, atau tengah, mengubah data, menghapus data, menampilkan data, dan keluar dari program. Dan membuat beberapa fungsi sebagai berikut: Menerima input nama dan usia mahasiswa, membuat node baru, kemudian menyisipkannya di depan linked list. Menerima input nama dan usia mahasiswa, membuat node baru, dan menyisipkannya di belakang linked list. Menerima input nama, usia, dan posisi yang diinginkan, lalu menyisipkan node baru pada posisi tersebut dalam linked list. Menerima input nama dan usia baru, lalu mengubah data pada node pertama. Menerima input nama dan usia baru, lalu mengubah data pada node terakhir. Menerima input nama, usia, dan posisi yang diinginkan, lalu mengubah data pada node yang sesuai dengan posisi tersebut. Menghapus node pertama dari linked list. Menghapus node terakhir dari linked list. Menerima input posisi yang diinginkan, lalu menghapus node pada posisi tersebut dalam linked list. Menghapus seluruh node dalam linked list. Menampilkan nama dan usia dari setiap node dalam linked list. 

Terakhir, membuat fungsi utama 'main()', program memberikan pilihan operasi kepada pengguna. Pengguna dapat memilih operasi yang diinginkan hingga memilih untuk keluar dari program.

#### a. Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.
![Screenshot (566)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/026e53cc-c9f6-49e2-b173-dc07aa46d487)

#### b. Hapus data Akechi
![Screenshot (567)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/69d2cb7a-7867-4368-acd1-08d6106dda61)

#### c.	Tambahkan data berikut diantara John dan Jane : Futaba	18
![Screenshot (568)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/52dae809-e5e2-4142-94a6-c52b5e02e2a4)

#### d.	Tambahkan data berikut diawal : Igor	20
![Screenshot (569)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/6656e7b7-2a62-4b2e-b99a-f9611733be70)

#### e.	Ubah data Michael menjadi : Reyn	18
![Screenshot (570)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/9e42c266-a4a2-420a-92bc-f3a978a127da)

#### f.	Tampilkan seluruh data
![Screenshot (571)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/11bd8ecb-172a-4992-87bd-6e90385b6d2d)

### Full Code Screenshot
![unguided1](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/049cbdd2-5235-4614-bf40-4d90aef128fb)
