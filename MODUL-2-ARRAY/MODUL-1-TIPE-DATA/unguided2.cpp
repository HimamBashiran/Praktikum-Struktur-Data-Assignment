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
