# <h1 align="center">Laporan Praktikum Modul Priority Queue</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
### PRIORITY QUEUE
Priority Queue adalah struktur data khusus yang memungkinkan kita menyimpan elemen-elemen dengan nilai prioritas tertentu. Konsep dasar Priority Queue mirip dengan antrian biasa, namun perbedaannya adalah setiap elemen dalam Priority Queue memiliki nilai prioritas yang menentukan urutan elemen saat diambil. Elemen dengan nilai prioritas tertinggi akan diambil terlebih dahulu, bukan elemen yang paling lama berada dalam antrian [1].
![Screenshot 2024-05-21 220734](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/f47ffb6f-56a8-43e2-a823-9ca884438588)

### HEAP
Heap adalah struktur data yang paling umum digunakan untuk priority queue. Heap memiliki kompleksitas waktu rata-rata O(log n) untuk operasi enqueue dan dequeue. Binary search trees adalah struktur data yang memungkinkan operasi enqueue dan dequeue dalam O(log n) waktu rata-rata, tetapi membutuhkan lebih banyak memori dibandingkan heap [2].

## Guided
```C++
#include <iostream>
#include <algorithm>
using namespace std;

int H[50];
int heapSize = -1;

int parent (int i){
    return (i-1) / 2;
}

int leftChild (int i){
    return (2 * i) + 1;
}

int rightChild (int i){
    return (2 * i) + 2;
}

void shiftUp (int i){
    while (i > 0 && H[parent(i)] < H[i]){
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown (int i){
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]){
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]){
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert (int p){
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax(){
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority (int i, int p){
    int oldp = H[i];
    H[i] = p;
    if (p > oldp){
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax(){
    return H[0];
}

void remove (int i){
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main(){
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i){
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Node with the maximum priority: " << extractMax() << "\n";
    cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i){
        cout << H[i] << " ";
    }
    cout << "\n";

    remove(3);

    cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i){
        cout << H[i] << " ";
    }
    return 0;
}
```
### Penjelasan
Program diatas merupakan program untuk mengimplementasikan sebuah priority queue menggunakan struktur data heap maksimal atau max heap. 

Pertama, program dimulai dengan mengimport library 'iostream' untuk input/output dan mengimport library 'algorithm' untuk menggunakan 'swap' sebagai bentuk menukar nilai dari dua variabel. Selanjutnya, mendefinisi dan menginisialisasi int H[50] untuk Array yang menyimpan elemen heap dengan ukuran maksimum 50. int heapSize = -1 untuk inisialisasi ukuran heap, yang berarti heap saat ini kosong. Membuat fungsi Helper int parent(int i) untuk mengembalikan indeks parent dari elemen ke-i. int leftChild(int i) untuk mengembalikan indeks left child dari elemen ke-i. int rightChild(int i) untuk mengembalikan indeks right child dari elemen ke-i. Selanjutnya, membuat fungsi shiftUp(int i) untuk mengangkat elemen di indeks i ke posisi yang tepat dalam heap agar memenuhi properti max heap. Membuat fungsi shiftDown(int i) untuk menurunkan elemen di indeks i ke posisi yang tepat dalam heap agar memenuhi properti max heap. Membuat fungsi insert(int p)untuk menambahkan elemen p ke dalam heap. Membuat fungsi extractMax() untuk menghapus dan mengembalikan elemen maksimal (root) dari heap. Membuat fungsi changePriority(int i, int p) untuk mengubah prioritas elemen di indeks i menjadi p. Membuat fungsi getMax()untuk mengembalikan elemen maksimal tanpa menghapusnya. Membuat fungsi remove(int i) untuk  menghapus elemen di indeks i dari heap.

Terakhir, membuat fungsi utama 'main()' untuk menguji fungsi-fungsi yang telah dibuat seperti Menambahkan Elemen, Mencetak Heap, Mengambil dan Mencetak Elemen Maksimal, dan Menghapus Elemen dari Heap.

## Unguided
### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.
```C++
#include <iostream>
#include <algorithm>
using namespace std;

// deklarasi ukuran maksimal H dan deklarasi heapSize
int H[50];
int heapSize = -1;

// fungsi void untuk dapatkan parent node
int parent(int i) {
    return (i - 1) / 2;
}

// fungsi void untuk dapatkan leftChiled node dari indeks i
int leftChild(int i) {
    return ((2 * i) + 1);
}

// fungsi void untuk dapatkan rightChild node dari indeks i
int rightChild(int i) {
    return ((2 * i) + 2);
}

// fungsi void untuk lakukan operasi shift up pada elemen dengan indeks i (elemen digerakkan ke atas heap)
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

// fungsi void untuk lakukan operasi shift down pada elemen dengan indeks i (elemen digerakkan ke bawah heap)
void shiftDown(int i) {
    // deklarasi maxIndex
    int maxIndex = i;
    int l = leftChild(i);
    // jika leftChild (l) lebih kecil dari heapSize dan H[l] > H[maxindex]
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    // jika rightChild (r) lebih kecil dari heapSize dan H[r] > H[maxindex]
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    // jika indeks tidak sama dengan maxIndex
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

// fungsi void untuk tambahkan elemen baru 
void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

// fungsi void untuk ekstrak (keluarkan) elemen maksimal dimana nilainya paling besar
int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

// fungsi void untuk ubah priority elemen
void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

// mendapatkan elemen maksimum dari heap
int getMax() {
    return H[0];
}

// fungsi void untuk hapus elemen dari heap
void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

// fungsi void untuk atur ukuran elemen dan isi elemen di dalam heap oleh input user
void addHeap(int size) {
    for (int i = 0; i < size; i++) {
        int element;
        cout << "Enter element " << (i + 1) << ": ";
        cin >> element;
        insert(element);
    }
}

// main program (program utama)
int main() {
    // deklarasi a
    int a;
    // user input ukuran elemen (banyak elemen yang diinginkan)
    cout << "Enter the size of elements: ";
    cin >> a;
    // memanggil fungsi addHeap
    addHeap(a);

    // tampilkan priority queue dari elemen yang telah diinput user
    cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    // tampilkan node yang memiliki maximum priority dengan memanggil fungsi extractMax
    cout << "Node with maximum priority: " << extractMax() << "\n";

    // tampilkan priority queue setelah ekstrak elemen maximum"
    cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    // deklarasi index dan newPriority
    int indeks, newPriority;
    // user input index elemen yang ingin diubah
    cout << "Enter the Index of the priority you want to change: ";
    cin >> indeks;
    // user input new priority untuk menggantikan elemen pada index yang telah diinput
    cout << "Enter the new priority: ";
    cin >> newPriority;
    // memanggil fungsi changePriority untuk ubah elemen
    changePriority(indeks, newPriority);

    // tampilkan Priority queue setelah elemen diperbarui
    cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    // deklarasi removeElement
    int removeElement;
    // user input indeks dari elemen yang ingin dihapus
    cout << "Enter the Indeks of the element you want to remove: ";
    cin >> removeElement;
    // panggil fungsi remove untuk hapus elemen
    remove(removeElement);

    // tampilkan Priority Queue setelah elemen dihapus
    cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    return 0;
}
```
#### Output:
![Screenshot (680)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/1d4b650c-2fba-4a4a-84e9-7bdfe1d2dc87)
### Penjelasan
Program di atas adalah program yang memungkinkan pengguna untuk melakukan beberapa operasi pada heap, seperti mendapatkan parent node, left child node, right child node, melakukan operasi shift up dan shift down, menambahkan elemen baru, mengekstrak elemen maksimum, mengubah prioritas elemen, mendapatkan elemen maksimum, serta menghapus elemen dari heap. Perbedaannya dengan program pada Guided 1 adalah bahwa program ini menggunakan input dari pengguna untuk mengonstruksi heap secara manual. Pada Guided 1, semua elemen dan indeks untuk operasi seperti penambahan (insert), perubahan (change), penghapusan (remove), dan lainnya, sudah dimasukkan langsung ke dalam program sehingga pengguna tidak perlu memberikan input tambahan. Sedangkan pada Unguided 1, pengguna harus memasukkan ukuran elemen, elemen-elemen itu sendiri, dan input-input lain yang diperlukan untuk setiap operasi.

Pertama, program dimulai dengan mengimport library 'iostream' untuk input/output dan mengimport library 'algorithm' untuk menggunakan 'swap' sebagai bentuk menukar nilai dari dua variabel. Selanjutnya, mendefinisi dan menginisialisasi int H[50] untuk Array yang menyimpan elemen heap dengan ukuran maksimum 50. int heapSize = -1 untuk inisialisasi ukuran heap, yang berarti heap saat ini kosong. Membuat fungsi Helper int parent(int i) untuk mengembalikan indeks parent dari elemen ke-i. int leftChild(int i) untuk mengembalikan indeks left child dari elemen ke-i. int rightChild(int i) untuk mengembalikan indeks right child dari elemen ke-i. Selanjutnya, membuat fungsi shiftUp(int i) untuk mengangkat elemen di indeks i ke posisi yang tepat dalam heap agar memenuhi properti max heap. Membuat fungsi shiftDown(int i) untuk menurunkan elemen di indeks i ke posisi yang tepat dalam heap agar memenuhi properti max heap. Membuat fungsi insert(int p)untuk menambahkan elemen p ke dalam heap. Membuat fungsi extractMax() untuk menghapus dan mengembalikan elemen maksimal (root) dari heap. Membuat fungsi changePriority(int i, int p) untuk mengubah prioritas elemen di indeks i menjadi p. Membuat fungsi getMax()untuk mengembalikan elemen maksimal tanpa menghapusnya. Membuat fungsi remove(int i) untuk  menghapus elemen di indeks i dari heap.

Terakhir, membuat fungsi utama 'main()' untuk meminta user untuk memasukkan jumlah elemen yang ingin dimasukkan ke dalam heap. Memanggil fungsi 'addHeap' untuk menambah elemen ke dalam heap. Menampilkan 'Priority Queue' untuk menampilkan elemen-elemen dalam heap setelah semua elemen ditambahkan. Menampilkan elemen dengan prioritas maksimum (elemen root) dan mengeluarkannya dari heap menggunakan 'extractMax'. Menampilkan Priority Queue Setelah Ekstraksi untuk menampilkan elemen-elemen dalam heap setelah elemen maksimum dikeluarkan. Meminta user untuk memasukkan indeks dan nilai prioritas baru untuk mengubah prioritas elemen pada indeks tersebut menggunakan 'changePriority'. Menampilkan Priority Queue Setelah Perubahan Prioritas untuk menampilkan elemen-elemen dalam heap setelah prioritas salah satu elemen diubah. Meminta user untuk memasukkan indeks elemen yang ingin dihapus dan menghapus elemen tersebut menggunakan 'remove'. Menampilkan Priority Queue Setelah Penghapusan untuk menampilkan elemen-elemen dalam heap setelah elemen pada indeks yang dipilih dihapus.

Secara garis besar, program ini memungkinkan pengguna untuk:
<pre>
Menambahkan elemen ke dalam heap.
Menampilkan elemen-elemen dalam heap.
Mengekstrak elemen maksimum dari heap.
Mengubah prioritas elemen tertentu dalam heap.
Menghapus elemen dari heap.
</pre>

### Full Code Screenshot
![unguided1](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/28b86528-28ca-4fe9-aa12-4a1965528d52)

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar struktur data khusus yang memungkinkan kita menyimpan elemen-elemen dengan nilai prioritas tertentu yang bernama priority queue. Konsep dasar Priority Queue mirip dengan antrian biasa, namun perbedaannya adalah setiap elemen dalam Priority Queue memiliki nilai prioritas yang menentukan urutan elemen saat diambil. Elemen dengan nilai prioritas tertinggi akan diambil terlebih dahulu, bukan elemen yang paling lama berada dalam antrian.

#### Pelajaran yang didapat
Priority Queue adalah struktur data yang memungkinkan penyimpanan elemen-elemen dengan nilai prioritas tertentu. Berbeda dengan antrian biasa, dalam Priority Queue, elemen dengan nilai prioritas tertinggi akan diambil terlebih dahulu, bukan elemen yang paling lama berada dalam antrian. Contoh implementasi praktis dari Priority Queue adalah pengelolaan tugas dalam sistem operasi, di mana tugas dengan prioritas lebih tinggi dijalankan sebelum tugas dengan prioritas lebih rendah. Heap adalah struktur data yang paling umum digunakan untuk mengimplementasikan Priority Queue. Heap menjamin kompleksitas waktu rata-rata O(log n) untuk operasi memasukkan (enqueue) dan mengeluarkan (dequeue) elemen. Meskipun binary search tree juga dapat digunakan untuk operasi ini dengan waktu rata-rata O(log n), heap lebih efisien dalam penggunaan memori. Gambar yang disertakan menggambarkan struktur Heap dan cara kerjanya dalam mengatur elemen-elemen berdasarkan prioritas mereka. Heap biasanya diimplementasikan dalam bentuk binary heap, yang bisa berupa max-heap atau min-heap, di mana elemen dengan prioritas tertinggi (atau terendah) selalu berada di akar pohon. Dengan demikian, Priority Queue dan Heap adalah alat penting dalam pengelolaan data yang memerlukan pengambilan elemen berdasarkan prioritas, memastikan operasi yang efisien dan terstruktur.

## Referensi
[1] Riczky Pratama, “Priority Queue: Konsep dan Penggunaan dalam Algoritma”, 2023. 

[2] Cheng, T., & Shang, Y, "A Survey of Priority Queues", 2020.
<<<<<<< HEAD

=======
>>>>>>> af5fa8e4bb8715f30dd5f38469bc268c3cf56879
