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
