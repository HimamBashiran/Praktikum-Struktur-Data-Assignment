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
