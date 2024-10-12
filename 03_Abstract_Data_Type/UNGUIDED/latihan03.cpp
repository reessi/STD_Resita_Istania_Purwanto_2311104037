#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukar isi array 2D pada posisi tertentu
void tukarIsiArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

// Fungsi untuk menukar nilai yang ditunjuk oleh dua pointer
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int arr1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int arr2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    cout << "Array 1:" << endl;
    tampilArray(arr1);
    cout << "\nArray 2:" << endl;
    tampilArray(arr2);

    // Menukar isi array di posisi tertentu
    cout << "\nMenukar isi array pada posisi [1][1]:" << endl;
    tukarIsiArray(arr1, arr2, 1, 1);
    cout << "Array 1:" << endl;
    tampilArray(arr1);
    cout << "\nArray 2:" << endl;
    tampilArray(arr2);

    // Menukar nilai yang ditunjuk oleh dua pointer
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    cout << "\nSebelum tukar pointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    tukarPointer(p1, p2);
    cout << "Setelah tukar pointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

