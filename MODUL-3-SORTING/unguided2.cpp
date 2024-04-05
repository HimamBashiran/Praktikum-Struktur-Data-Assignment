#include <iostream>
#include <string>
using namespace std;

void buble_sort(string arr[], int length){
    bool not_sorted = true;
    int j = 0;
    string tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
                }//end of if
            }//end of for loop
        }//end of while loop
    }//end of bubble_sort
    void print_array(string a[], int length) {
        for(int i=0; i<length; i++) {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
    int main() {
        int length = 10;
        string a[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
        cout << "Urutan nama sebelum di sorting: " << endl;
        print_array(a, length);

        buble_sort(a, length);

        cout << "\nUrutan nama setelah di sorting: " << endl;
        print_array(a, length);

        return 0;
    }


