#include <iostream>
using namespace std;

int main(){
    // Deklarasi variabel
    int x_size, y_size, z_size;

    // Memasukkan jumlah dan ukuran elemen array
    cout << "==================================" << endl;
    cout << "   Array tiga dimensi (x, y, z)" << endl;
    cout << "==================================" << endl;
    cout << "\nMasukkan ukuran matriks array: ";
    cin >> x_size;
    cout << "\nMasukkan ukuran baris array: ";
    cin >> y_size;
    cout << "\nMasukkan ukuran kolom array: ";
    cin >> z_size;
    // Deklarasi Array
    int arr[x_size][y_size][z_size];
    // Input elemen
    for (int x=0; x < x_size; x++)
    {
        for (int y=0; y < y_size; y++)
        {
            for (int z=0; z < z_size; z++)
            {
                cout << "Input array[" << x << "] [" << y << "] [" << z <<"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Data array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //Tampilan array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}