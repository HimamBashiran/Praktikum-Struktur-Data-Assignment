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

