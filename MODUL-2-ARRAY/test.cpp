#include <iostream>
using namespace std;

int main() {
    // Variables to store the dimensions.
    int dim1, dim2, dim3;

    // Ask the user for the dimensions of the 3D array.
    cout << "Enter the first dimension size: ";
    cin >> dim1;
    cout << "Enter the second dimension size: ";
    cin >> dim2;
    cout << "Enter the third dimension size: ";
    cin >> dim3;

    // Dynamically allocate the 3D array.
    int ***arr = new int**[dim1];
    for (int i = 0; i < dim1; ++i) {
        arr[i] = new int*[dim2];
        for (int j = 0; j < dim2; ++j) {
            arr[i][j] = new int[dim3];
        }
    }

    // Input the elements of the array.
    for (int x = 0; x < dim1; ++x) {
        for (int y = 0; y < dim2; ++y) {
            for (int z = 0; z < dim3; ++z) {
                cout << "Enter element at arr[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
    }

    // Display the elements of the array.
    cout << "\nContents of the array:\n";
    for (int x = 0; x < dim1; ++x) {
        for (int y = 0; y < dim2; ++y) {
            for (int z = 0; z < dim3; ++z) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Deallocate the array.
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
