# <h1 align="center">Laporan Praktikum Modul Graph & Tree</h1>
<p align="center">Himam Bashiran</p>
<p align="center">2311110055</p>

## Dasar Teori
### GRAPH
Graph adalah kumpulan simpul (nodes) / vertex yang dihubungkan satu sama lain melalui sisi/ busur (edges). Simpul adalah objek sembarang, seperti kota, atom-atom dan objek-objek yang dapat dijabarkan. Busur adalah relasi yang menghubungkan antara objek-objek tersebut, sehingga objek-objek tersebut mempunyai makna. Secara umum, sebuah graf dapat dirumuskan, G(V, E). Dengan G adalah Graph sedangkan V adalah simpul
dan E adalah busur[1].

Berdasarkan arah busurnya, graph dibagi menjadi dua, yaitu graph berarah/ directed graph dan graph tidak berarah/ undirected graph. Graf berarah adalah graph yang setiap busurnya mempunyai arah. Dengan demikian, graph berarah dapat dinotasikan sebagai:
![Screenshot 2024-06-05 214959](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/2b71df9b-2287-4db7-80bf-46ce282dcf14)

Sedangkan graph tidak berarah merupakan sebuah graph yang setiap busurnya tidak mempunyai arah. Graph tidak berarah dapat dinotasikan sebagai:
![Screenshot 2024-06-05 215115](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/5b761bba-7f56-48f1-be4b-af200ffc4349)

![Screenshot 2024-06-05 215145](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/bcd915af-3726-46c7-b7d0-f1e851a328c1)

### TREE 
Tree adalah struktur yang mengandung aspek hirarki yang dibentuk melalui pengelompokkan elemen atau node dalam tingkatan tertentu. Terdapat macam-macam jenis tree beserta cabang ilmu lainnya yang berkaitan dengan jenis-jenis tree tersebut. Salah satunya adalah binary tree. Jenis tree tersebut identik dengan ciri parent yang pasti hanya memiliki dua anak[2].
![Screenshot 2024-06-05 221020](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/7f69885b-8b55-47e3-84c0-be4038d50066)

## Guided
### 1. Program Graph
```C++
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int Himam_Bashiran_2311110055;

int main() {
    int numNodes;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> numNodes;

    vector<string> nodes(numNodes);
    vector<vector<int>> distanceMatrix(numNodes, vector<int>(numNodes));

    // Input node names
    for (int i = 0; i < numNodes; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> nodes[i];
    }

    // Input distances between nodes
    for (int i = 0; i < numNodes; ++i) {
        for (int j = 0; j < numNodes; ++j) {
            if (i == j) {
                distanceMatrix[i][j] = 0;
            } else {
                cout << "Silakan masukkan bobot antar simpul " << nodes[i] << "-->" << nodes[j] << ": ";
                cin >> distanceMatrix[i][j];
            }
        }
    }

    // Print distance matrix
    cout << "\n      "; // Adjust spacing for header
    for (const auto& node : nodes) {
        cout << setw(6) << node; // Right align node names in the header
    }
    cout << endl;

    for (int i = 0; i < numNodes; ++i) {
        cout << setw(6) << nodes[i]; // Left align node names in the row labels
        for (int j = 0; j < numNodes; ++j) {
            cout << setw(6) << distanceMatrix[i][j]; // Align distance values
        }
        cout << endl;
    }

    return 0;
}
```
### Penjelasan
Program diatas merupakan program yang meminta pengguna untuk memasukkan jumlah simpul (node) dalam suatu graf, kemudian menerima nama-nama simpul tersebut dan jarak (bobot) antara setiap pasangan simpul. Setelah itu, program menampilkan matriks jarak (distance matrix) yang merepresentasikan graf tersebut.

Program dimulai dengan import library 'iostream' untuk input/output, library 'vector' untuk mengimplementasikan struktur data vektor (vector), library 'string' untuk tipe data string, dan library 'iomanip' untuk mengatur jarak. Selanjutnya, program meminta pengguna untuk memasukkan jumlah simpul melalui cin >> 'numNodes'. Program membuat dua vektor, 'nodes' untuk menyimpan nama-nama simpul, dan 'distanceMatrix' untuk menyimpan jarak antara setiap pasangan simpul. Program meminta pengguna untuk memasukkan nama-nama simpul melalui cin >> 'nodes[i]' dan menyimpannya dalam vektor 'nodes'. Program meminta pengguna untuk memasukkan jarak antara setiap pasangan simpul melalui cin >> 'distanceMatrix[i][j]'. Jarak antara simpul yang sama (diagonal matriks) diisi dengan 0. Program mencetak header matriks jarak dengan menampilkan nama-nama simpul di baris pertama menggunakan cout << setw(6) << 'node'. Program mencetak isi matriks jarak dengan menampilkan jarak antara setiap pasangan simpul. Baris pertama menampilkan nama simpul menggunakan cout << setw(6) << 'nodes[i]', dan kolom-kolom selanjutnya menampilkan jarak menggunakan cout << setw(6) << 'distanceMatrix[i][j]'.

### 2. Program Tree
```C++
#include <iostream>
using namespace std;

// Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// FUngsi untuk simpul baru
void simpulBaru(char dataMasukkan){
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar(){
    if (root == NULL){
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk...." << endl;
    } else {
        cout << "Root sudah ada...." << endl;
    }
}

void tambahSimpul(){
    if (root != NULL){
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 and j < 256){
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser != '0'){
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0){
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser != '0'){
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
    }
}

void bacaPohon(){
    if (root != NULL){
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL){
            saatIni = alamat[i];
            cout << saatIni->data << " ";
            pencacah++;
            if (pencacah == n){
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}
// Fungsi utama
int main(){
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```
### Penjelasan
Program diatas merupakan implementasi struktur data pohon biner (binary tree).

Program dimulai dengan mengimport library 'iostream' untuk input/output. Selanjutnya, Program mendefinisikan struktur data 'pohon' yang terdiri dari tiga anggota: 'kanan' (pointer ke simpul kanan), 'data' (data yang disimpan dalam simpul), dan 'kiri' (pointer ke simpul kiri). Program menyediakan beberapa variabel global untuk menyimpan pointer ke simpul-simpul tertentu dalam pohon, seperti 'root' (simpul akar), 'simpul' (simpul saat ini), dan 'alamat' (array untuk menyimpan alamat simpul-simpul sementara). Fungsi 'inisialisasi()' digunakan untuk menginisialisasi 'root' dengan NULL. Fungsi 'simpulBaru(char dataMasukkan)' digunakan untuk membuat simpul baru dengan data yang diberikan dan menginisialisasi 'kanan' dan 'kiri' dengan NULL. Fungsi 'simpulAkar()' digunakan untuk membuat simpul akar jika 'root' masih NULL. Fungsi ini meminta pengguna untuk memasukkan data dan membuat simpul baru dengan data tersebut sebagai akar. Fungsi 'tambahSimpul()' digunakan untuk menambahkan simpul-simpul baru ke dalam pohon. Fungsi ini menggunakan array 'alamat' untuk menyimpan alamat simpul-simpul sementara dan meminta pengguna untuk memasukkan data kiri dan kanan secara bergantian. Jika pengguna memasukkan '0', maka tidak ada simpul yang ditambahkan di sisi tersebut. Fungsi 'bacaPohon()' digunakan untuk mencetak data simpul-simpul dalam pohon secara level-order (level per level dari kiri ke kanan).

Terakhir, membuat fungsi utama 'main()'. Dalam fungsi 'main()', program memanggil 'inisialisasi()' untuk menginisialisasi 'root', 'simpulAkar()' untuk membuat simpul akar, 'tambahSimpul()' untuk menambahkan simpul-simpul baru, dan 'bacaPohon()' untuk mencetak data simpul-simpul dalam pohon.

## Unguided
### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
```C++
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int Himam_Bashiran_2311110055;

int main() {
    int numNodes;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> numNodes;

    vector<string> nodes(numNodes);
    vector<vector<int>> distanceMatrix(numNodes, vector<int>(numNodes));

    // Input node names
    for (int i = 0; i < numNodes; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> nodes[i];
    }

    // Input distances between nodes
    for (int i = 0; i < numNodes; ++i) {
        for (int j = 0; j < numNodes; ++j) {
            if (i == j) {
                distanceMatrix[i][j] = 0;
            } else {
                cout << "Silakan masukkan bobot antar simpul " << nodes[i] << "-->" << nodes[j] << ": ";
                cin >> distanceMatrix[i][j];
            }
        }
    }

    // Print distance matrix
    cout << "\n      "; // Adjust spacing for header
    for (const auto& node : nodes) {
        cout << setw(6) << node; // Right align node names in the header
    }
    cout << endl;

    for (int i = 0; i < numNodes; ++i) {
        cout << setw(6) << nodes[i]; // Left align node names in the row labels
        for (int j = 0; j < numNodes; ++j) {
            cout << setw(6) << distanceMatrix[i][j]; // Align distance values
        }
        cout << endl;
    }

    return 0;
}
```
#### Output:
![Screenshot (793)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/100d40b8-81d6-4375-b469-1f02ccc838ab)

### Penjelasan
Program diatas merupakan program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

Program dimulai dengan import library 'iostream' untuk input/output, library 'vector' untuk mengimplementasikan struktur data vektor (vector), library 'string' untuk tipe data string, dan library 'iomanip' untuk mengatur jarak. Selanjutnya, Meminta input jumlah simpul dari pengguna dengan menampilkan "Silakan masukan jumlah simpul: " dan menyimpan input tersebut dalam variabel 'numNodes'. Membuat vektor dinamis untuk menyimpan nama-nama simpul dengan ukuran 'numNodes' dan menyimpannya dalam vektor 'nodes'. Membuat vektor dua dimensi untuk menyimpan matriks jarak dengan ukuran 'numNodes' x 'numNodes' dan menyimpannya dalam vektor 'distanceMatrix'. Meminta input nama-nama simpul dengan melakukan iterasi dari i = 0 hingga numNodes - 1. Pada setiap iterasi, program menampilkan "Simpul i + 1: " dan menyimpan input nama simpul dalam nodes[i]. Meminta input jarak antara setiap pasangan simpul dengan melakukan iterasi bersarang dari i = 0 hingga numNodes - 1 (untuk baris) dan j = 0 hingga numNodes - 1 (untuk kolom). Untuk setiap pasangan (i, j):
<pre>
- Jika i == j (simpul yang sama), jarak ditetapkan sebagai 0.
- Jika i != j (simpul yang berbeda), program menampilkan "Silakan masukkan bobot antar simpul nodes[i] --> nodes[j]: " dan menyimpan input jarak dalam distanceMatrix[i][j].
</pre>
Mencetak header matriks dengan menampilkan spasi, diikuti dengan nama-nama simpul dengan jarak 6 karakter. Melakukan iterasi dari i = 0 hingga numNodes - 1 (untuk baris):
<pre>
- Mencetak nama simpul nodes[i] dengan jarak 6 karakter.
- Melakukan iterasi dari j = 0 hingga numNodes - 1 (untuk kolom): Mencetak nilai distanceMatrix[i][j] dengan jarak 6 karakter.
- Mencetak baris baru setelah selesai mencetak baris tersebut.
</pre>

### Full Code Screenshot
![unguided1](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/4c151b91-a49c-4fb9-b5e5-eb2f4ced6df6)

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!
```C++
#include <iostream>
using namespace std;

int Himam_Bashiran_2311110055;

// Definisi struktur pohon
struct pohon {
    pohon* kiri;
    pohon* kanan;
    char data;
};

// Fungsi untuk membuat simpul baru
pohon* buatSimpul(char data) {
    pohon* baru = new pohon();
    baru->data = data;
    baru->kiri = baru->kanan = NULL;
    return baru;
}

// Fungsi untuk menambahkan simpul ke pohon
pohon* tambahSimpul(pohon* root, char data) {
    if (root == NULL) {
        return buatSimpul(data);
    } else {
        char arah;
        cout << "Tambahkan " << data << " ke kiri (l) atau kanan (r) dari " << root->data << "? (l/r): ";
        cin >> arah;
        if (arah == 'l') {
            root->kiri = tambahSimpul(root->kiri, data);
        } else {
            root->kanan = tambahSimpul(root->kanan, data);
        }
    }
    return root;
}

// Fungsi untuk traversal pre-order
void preOrder(pohon* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

// Fungsi untuk traversal in-order
void inOrder(pohon* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

// Fungsi untuk traversal post-order
void postOrder(pohon* root) {
    if (root != NULL) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout << root->data << " ";
    }
}

// Fungsi utama
int main() {
    pohon* root = NULL;
    int pilihan;
    char data;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Tambah Simpul\n";
        cout << "2. Tampilkan Pre-order\n";
        cout << "3. Tampilkan In-order\n";
        cout << "4. Tampilkan Post-order\n";
        cout << "5. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan karakter: ";
                cin >> data;
                if (root == NULL) {
                    root = buatSimpul(data);
                } else {
                    tambahSimpul(root, data);
                }
                break;
            case 2:
                cout << "Pre-order: ";
                preOrder(root);
                cout << endl;
                break;
            case 3:
                cout << "In-order: ";
                inOrder(root);
                cout << endl;
                break;
            case 4:
                cout << "Post-order: ";
                postOrder(root);
                cout << endl;
                break;
            case 5:
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }
    return 0;
}
```
#### Output
![Screenshot (794)](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/f3508385-4e6e-4ed5-a1ed-6b6b66de9346)
### Penjelasan
Program diatas merupakan program tree dengan program menu menggunakan input data tree dari user dan dapat menampilkan pre-order, inorder, dan post order.

Program dimulai dengan mengimport library 'iostream' untuk input/output. Selanjutnya, mendefinisikan struktur 'pohon' yang berisi tiga anggota: 'kiri' dan 'kanan' (pointer ke simpul lain), dan 'data' (karakter yang disimpan di simpul). Fungsi 'buatSimpul' membuat sebuah simpul baru dengan data yang diberikan dan menginisialisasi 'kiri' dan 'kanan' sebagai NULL. Fungsi 'tambahSimpul' menambahkan simpul baru dengan data yang diberikan ke dalam pohon. Jika pohon masih kosong, maka simpul baru menjadi akar. Jika tidak, program akan meminta pengguna untuk memilih apakah simpul baru akan ditambahkan ke kiri atau kanan dari simpul tertentu. Terdapat tiga fungsi traversal: 'preOrder', 'inOrder', dan 'postOrder', yang mencetak data simpul dengan urutan traversal yang sesuai (pre-order, in-order, dan post-order). 

Terakhir, membuat fungsi utama 'main()' untuk dapat menampilkan menu pilihan kepada pengguna:
<pre>
1. Tambah Simpul
2. Tampilkan Pre-order
3. Tampilkan In-order
4. Tampilkan Post-order
5. Keluar
</pre>

### Full Code Screenshot
![unguided2](https://github.com/HimamBashiran/Praktikum-Struktur-Data-Assignment/assets/142086470/ebed4ce0-bda2-4328-9872-4a31f742017d)

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar dua materi baru yaitu graph dan tree. Graph adalah kumpulan simpul (nodes) / vertex yang dihubungkan satu sama lain melalui sisi/ busur (edges). Sedangkan tree adalah struktur yang mengandung aspek hirarki yang dibentuk melalui pengelompokkan elemen atau node dalam tingkatan tertentu.

#### Pelajaran yang didapat
Berdasarkan penjelasan yang diberikan, dapat disimpulkan beberapa poin penting sebagai berikut:

1. **Graph**:
   - Graph adalah kumpulan simpul (nodes/vertex) yang dihubungkan melalui sisi/busur (edges).
   - Graph dapat direpresentasikan secara umum sebagai G(V, E), di mana V adalah simpul dan E adalah busur.
   - Graph dibagi menjadi dua jenis berdasarkan arah busurnya:
     - Graph berarah (directed graph): setiap busur memiliki arah.
     - Graph tidak berarah (undirected graph): setiap busur tidak memiliki arah.

2. **Tree**:
   - Tree adalah struktur data yang mengandung aspek hierarki, di mana elemen atau node dikelompokkan dalam tingkatan tertentu.
   - Terdapat berbagai jenis tree, salah satunya adalah binary tree.
   - Binary tree memiliki ciri khas di mana setiap parent hanya memiliki dua anak (anak kiri dan anak kanan).

Graph dan tree adalah struktur data yang digunakan untuk merepresentasikan hubungan atau hierarki antara objek atau elemen. Graph lebih umum dan dapat memiliki hubungan yang lebih kompleks antara simpul, sementara tree memiliki struktur hierarki yang lebih terstruktur dan setiap simpul hanya dapat memiliki satu induk (kecuali akar). Binary tree adalah jenis tree khusus di mana setiap simpul hanya dapat memiliki maksimal dua anak.

## Referensi
[1] Bondan Himawan, “IMPLEMENTASI GRAF DALAM PENYIMPANAN DATA STRUKTUR BANGUNAN”, 2008.

[2] Dena Djayusman, "IMPLEMENTASI STRUKTUR DATA TREE PADA GAME SNAKE DENGAN C", 2021.
